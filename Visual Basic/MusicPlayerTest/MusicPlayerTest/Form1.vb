Imports System.IO
Imports WMPlib

Public Class Form1

    Dim songPath As String
    Dim isPlayingSong As Boolean = False

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim myStream As Stream = Nothing

        OpenFileDialog1.InitialDirectory = "c:\"
        OpenFileDialog1.Filter = "mp3 files (*.mp3)|*.mp3|wav files (*.wav)|*.wav"
        OpenFileDialog1.FilterIndex = 2
        OpenFileDialog1.RestoreDirectory = True

        If OpenFileDialog1.ShowDialog() = System.Windows.Forms.DialogResult.OK Then
            Try
                myStream = OpenFileDialog1.OpenFile()
                If (myStream IsNot Nothing) Then
                    songPath = System.IO.Path.GetFullPath(OpenFileDialog1.FileName)
                    TextBox1.Text = songPath
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

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If isPlayingSong = False Then
            isPlayingSong = True
            player.URL = songPath
            If songPath = "" Then
                MsgBox("Chose a song to play first.", MsgBoxStyle.Exclamation, "No song selected!")
            Else
                player.controls.play()
                Timer1.Enabled = True
                Timer1.Start()
                Button2.Text = "Playing song!" + vbNewLine + " Click to stop."
            End If
        Else
            isPlayingSong = False
            player.close()
            Timer1.Enabled = False
            Button2.Text = "Play song"
        End If
    End Sub



    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        ProgressBar1.Maximum = player.currentMedia.duration
        ProgressBar1.Value = player.controls.currentPosition
        ProgressBar1.Increment(1)
    End Sub
    
End Class
