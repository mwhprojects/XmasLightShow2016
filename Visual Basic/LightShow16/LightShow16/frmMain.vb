Imports System.IO
Imports WMPLib

Public Class frmMain

    Dim isPlayingSong As Boolean = False
    Public songPath As String

    Private Sub ExitToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem.Click
        Me.Close()
    End Sub

    Function ucDisconnect()
        SerialPort1.Close()
        btnConnect.Text = "Connect"
        lbl_connstatus.Text = "NOT CONNECTED"
        GroupBox2.Enabled = False
        GroupBox3.Enabled = False
        GroupBox4.Enabled = False
        tmrUpdatePorts.Enabled = True
    End Function

    Function ucConnect()
        lbl_connstatus.Text = "CONNECTED"
        btnQuickConnect.Visible = False
        btnConnect.Text = "Disconnect"
        GroupBox2.Enabled = True
        GroupBox3.Enabled = True
        GroupBox4.Enabled = True
        tmrUpdatePorts.Enabled = False
    End Function


    Private Sub btnQuickConnect_Click(sender As Object, e As EventArgs) Handles btnQuickConnect.Click
        SerialPort1.PortName = My.Settings.LastCOMPort
        Dim connected As Boolean = True  ' Declare as true. If things go wrong, it'll be switched to false.
        Try
            SerialPort1.Open()
        Catch ex As Exception
            connected = False
        End Try

        If connected = False Then
            MsgBox("Could not connect. Try again.", MsgBoxStyle.Exclamation, "Connection failed!")
        Else
            ucConnect()
        End If
    End Sub

    Private Sub btnConnect_Click(sender As Object, e As EventArgs) Handles btnConnect.Click
        If btnConnect.Text = "Connect" Then
            frmConnect.Show()
        Else
            ucDisconnect()
        End If
    End Sub

    Private Sub btnRainbow_Click(sender As Object, e As EventArgs) Handles btnRainbow.Click
        SerialPort1.Write("rainbow")
    End Sub

    Private Sub btnEstop_Click(sender As Object, e As EventArgs) Handles btnEstop.Click
        SerialPort1.Write("estop")
        ucDisconnect()
    End Sub

    Private Sub btnStop_Click(sender As Object, e As EventArgs) Handles btnStop.Click
        SerialPort1.Write("stop")
    End Sub

    Private Sub btnTest_Click(sender As Object, e As EventArgs) Handles btnTest.Click
        SerialPort1.Write("test")
    End Sub

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ucDisconnect()  'Hides controls on form load since not connected.

        btnQuickConnect.Visible = False

        txtCLS1.Text = My.Settings.CLS1
        txtCLS2.Text = My.Settings.CLS2
        txtCLS3.Text = My.Settings.CLS3
        txtCLS4.Text = My.Settings.CLS4
    End Sub



    Private Sub ShutUpToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ShutUpToolStripMenuItem.Click
        player.controls.stop()
    End Sub

    Private Sub txtCLS1_TextChanged(sender As Object, e As EventArgs) Handles txtCLS1.TextChanged
        My.Settings.CLS1 = txtCLS1.Text
        My.Settings.Save()
    End Sub

    Private Sub txtCLS2_TextChanged(sender As Object, e As EventArgs) Handles txtCLS2.TextChanged
        My.Settings.CLS2 = txtCLS2.Text
        My.Settings.Save()
    End Sub

    Private Sub txtCLS3_TextChanged(sender As Object, e As EventArgs) Handles txtCLS3.TextChanged
        My.Settings.CLS3 = txtCLS3.Text
        My.Settings.Save()
    End Sub

    Private Sub txtCLS4_TextChanged(sender As Object, e As EventArgs) Handles txtCLS4.TextChanged
        My.Settings.CLS4 = txtCLS4.Text
        My.Settings.Save()
    End Sub

    Private Sub btnChoseCLS1_Click(sender As Object, e As EventArgs) Handles btnChoseCLS1.Click
        Dim myStream As Stream = Nothing

        OpenFileDialog1.InitialDirectory = "c:\Users\Matt\Music"
        OpenFileDialog1.Filter = "mp3 files (*.mp3)|*.mp3"
        OpenFileDialog1.FilterIndex = 2
        OpenFileDialog1.RestoreDirectory = True

        If OpenFileDialog1.ShowDialog() = System.Windows.Forms.DialogResult.OK Then
            Try
                myStream = OpenFileDialog1.OpenFile()
                If (myStream IsNot Nothing) Then
                    songPath = System.IO.Path.GetFullPath(OpenFileDialog1.FileName)
                    txtCLS1.Text = songPath
                End If
            Catch Ex As Exception
                MessageBox.Show("Cannot read file from disk. Original error: " & Ex.Message)
            Finally
                ' Check this again, since we need to make sure we didn't throw an exception on open.
                If (myStream IsNot Nothing) Then
                    myStream.Close()
                End If
            End Try
        End If
    End Sub

    Private Sub btnChoseCLS2_Click(sender As Object, e As EventArgs) Handles btnChoseCLS2.Click
        Dim myStream As Stream = Nothing

        OpenFileDialog1.InitialDirectory = "c:\Users\Matt\Music"
        OpenFileDialog1.Filter = "mp3 files (*.mp3)|*.mp3"
        OpenFileDialog1.FilterIndex = 2
        OpenFileDialog1.RestoreDirectory = True

        If OpenFileDialog1.ShowDialog() = System.Windows.Forms.DialogResult.OK Then
            Try
                myStream = OpenFileDialog1.OpenFile()
                If (myStream IsNot Nothing) Then
                    songPath = System.IO.Path.GetFullPath(OpenFileDialog1.FileName)
                    txtCLS2.Text = songPath
                End If
            Catch Ex As Exception
                MessageBox.Show("Cannot read file from disk. Original error: " & Ex.Message)
            Finally
                ' Check this again, since we need to make sure we didn't throw an exception on open.
                If (myStream IsNot Nothing) Then
                    myStream.Close()
                End If
            End Try
        End If
    End Sub

    Private Sub btnChoseCLS3_Click(sender As Object, e As EventArgs) Handles btnChoseCLS3.Click
        Dim myStream As Stream = Nothing

        OpenFileDialog1.InitialDirectory = "c:\Users\Matt\Music"
        OpenFileDialog1.Filter = "mp3 files (*.mp3)|*.mp3"
        OpenFileDialog1.FilterIndex = 2
        OpenFileDialog1.RestoreDirectory = True

        If OpenFileDialog1.ShowDialog() = System.Windows.Forms.DialogResult.OK Then
            Try
                myStream = OpenFileDialog1.OpenFile()
                If (myStream IsNot Nothing) Then
                    songPath = System.IO.Path.GetFullPath(OpenFileDialog1.FileName)
                    txtCLS3.Text = songPath
                End If
            Catch Ex As Exception
                MessageBox.Show("Cannot read file from disk. Original error: " & Ex.Message)
            Finally
                ' Check this again, since we need to make sure we didn't throw an exception on open.
                If (myStream IsNot Nothing) Then
                    myStream.Close()
                End If
            End Try
        End If
    End Sub

    Private Sub btnChoseCLS4_Click(sender As Object, e As EventArgs) Handles btnChoseCLS4.Click
        Dim myStream As Stream = Nothing

        OpenFileDialog1.InitialDirectory = "c:\Users\Matt\Music"
        OpenFileDialog1.Filter = "mp3 files (*.mp3)|*.mp3"
        OpenFileDialog1.FilterIndex = 2
        OpenFileDialog1.RestoreDirectory = True

        If OpenFileDialog1.ShowDialog() = System.Windows.Forms.DialogResult.OK Then
            Try
                myStream = OpenFileDialog1.OpenFile()
                If (myStream IsNot Nothing) Then
                    songPath = System.IO.Path.GetFullPath(OpenFileDialog1.FileName)
                    txtCLS4.Text = songPath
                End If
            Catch Ex As Exception
                MessageBox.Show("Cannot read file from disk. Original error: " & Ex.Message)
            Finally
                ' Check this again, since we need to make sure we didn't throw an exception on open.
                If (myStream IsNot Nothing) Then
                    myStream.Close()
                End If
            End Try
        End If
    End Sub


    Dim WithEvents player As WindowsMediaPlayer = New WindowsMediaPlayer


    Private Sub btnPlayCLS1_Click(sender As Object, e As EventArgs) Handles btnPlayCLS1.Click
        If isPlayingSong = False Then
            isPlayingSong = True
            player.URL = txtCLS1.Text
            player.settings.volume = 25
            If txtCLS1.Text = "" Then
                MsgBox("Chose a song to play first.", MsgBoxStyle.Exclamation, "No song selected!")
            Else
                SerialPort1.Write("cls1")
                player.controls.play()
                MsgBox("Christmas Light Show 2016 - Song #1 now playing.", MsgBoxStyle.OkOnly, "Performing...")
            End If
        Else
            isPlayingSong = False
            player.close()
        End If
    End Sub

    Private Sub btnPlayCLS2_Click(sender As Object, e As EventArgs) Handles btnPlayCLS2.Click
        If isPlayingSong = False Then
            isPlayingSong = True
            player.URL = txtCLS2.Text
            player.settings.volume = 25
            If txtCLS2.Text = "" Then
                MsgBox("Chose a song to play first.", MsgBoxStyle.Exclamation, "No song selected!")
            Else
                SerialPort1.Write("cls2")
                player.controls.play()
                MsgBox("Christmas Light Show 2016 - Song #2 now playing.", MsgBoxStyle.OkOnly, "Performing...")
            End If
        Else
            isPlayingSong = False
            player.close()
        End If

    End Sub

    Private Sub btnPlayCLS3_Click(sender As Object, e As EventArgs) Handles btnPlayCLS3.Click
        If isPlayingSong = False Then
            isPlayingSong = True
            player.URL = txtCLS3.Text
            player.settings.volume = 25
            If txtCLS1.Text = "" Then
                MsgBox("Chose a song to play first.", MsgBoxStyle.Exclamation, "No song selected!")
            Else
                SerialPort1.Write("cls3")
                player.controls.play()
                MsgBox("Christmas Light Show 2016 - Song #3 now playing.", MsgBoxStyle.OkOnly, "Performing...")
            End If
        Else
            isPlayingSong = False
            player.close()
        End If

    End Sub

    Private Sub btnPlayCLS4_Click(sender As Object, e As EventArgs) Handles btnPlayCLS4.Click
        If isPlayingSong = False Then
            isPlayingSong = True
            player.URL = txtCLS1.Text
            player.settings.volume = 25
            If txtCLS1.Text = "" Then
                MsgBox("Chose a song to play first.", MsgBoxStyle.Exclamation, "No song selected!")
            Else
                SerialPort1.Write("cls4")
                player.controls.play()
                MsgBox("Christmas Light Show 2016 - Song #4 now playing.", MsgBoxStyle.OkOnly, "Performing...")
            End If
        Else
            isPlayingSong = False
            player.close()
        End If

    End Sub

    Private Sub tmrUpdatePorts_Tick(sender As Object, e As EventArgs) Handles tmrUpdatePorts.Tick
        frmConnect.lst_comports.Items.Clear()

        For Each port As String In My.Computer.Ports.SerialPortNames
            frmConnect.lst_comports.Items.Add(port)
        Next

        If frmConnect.lst_comports.Items.Contains(My.Settings.LastCOMPort) Then
            btnQuickConnect.Visible = True
        End If

    End Sub
End Class
