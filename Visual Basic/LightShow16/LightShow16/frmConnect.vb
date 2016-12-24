Public Class frmConnect

    Private Sub btn_cancel_Click(sender As Object, e As EventArgs) Handles btn_cancel.Click
        Me.Close()

    End Sub

    Private Sub frmConnect_Load(sender As Object, e As EventArgs) Handles MyBase.Load
    End Sub

    Private Sub btnTryConnect_Click(sender As Object, e As EventArgs) Handles btnTryConnect.Click
        frmMain.SerialPort1.PortName = lst_comports.SelectedItem.ToString
        Dim connected As Boolean = True  ' Declare as true. If things go wrong, it'll be switched to false.
        Try
            frmMain.SerialPort1.Open()
        Catch ex As Exception
            connected = False
        End Try

        If connected = False Then
            MsgBox("Could not connect. Try again.", MsgBoxStyle.Exclamation, "Connection failed!")
        Else
            frmMain.ucConnect()
            My.Settings.LastCOMPort = lst_comports.SelectedItem.ToString
            My.Settings.Save()
            Me.Close()
        End If
    End Sub

    Private Sub lst_comports_MouseDoubleClick(sender As Object, e As MouseEventArgs) Handles lst_comports.MouseDoubleClick
        btnTryConnect.PerformClick()
    End Sub
End Class