<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmMain
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ShutUpToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.btnConnect = New System.Windows.Forms.Button()
        Me.lbl_connstatus = New System.Windows.Forms.Label()
        Me.btnQuickConnect = New System.Windows.Forms.Button()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.btnTest = New System.Windows.Forms.Button()
        Me.btnRainbow = New System.Windows.Forms.Button()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.Button7 = New System.Windows.Forms.Button()
        Me.txtCLS4 = New System.Windows.Forms.TextBox()
        Me.btnChoseCLS4 = New System.Windows.Forms.Button()
        Me.btnPlayCLS4 = New System.Windows.Forms.Button()
        Me.txtCLS3 = New System.Windows.Forms.TextBox()
        Me.btnChoseCLS3 = New System.Windows.Forms.Button()
        Me.btnPlayCLS3 = New System.Windows.Forms.Button()
        Me.txtCLS2 = New System.Windows.Forms.TextBox()
        Me.btnChoseCLS2 = New System.Windows.Forms.Button()
        Me.btnPlayCLS2 = New System.Windows.Forms.Button()
        Me.txtCLS1 = New System.Windows.Forms.TextBox()
        Me.btnChoseCLS1 = New System.Windows.Forms.Button()
        Me.btnPlayCLS1 = New System.Windows.Forms.Button()
        Me.SerialPort1 = New System.IO.Ports.SerialPort(Me.components)
        Me.btnEstop = New System.Windows.Forms.Button()
        Me.btnStop = New System.Windows.Forms.Button()
        Me.GroupBox4 = New System.Windows.Forms.GroupBox()
        Me.OpenFileDialog1 = New System.Windows.Forms.OpenFileDialog()
        Me.tmrUpdatePorts = New System.Windows.Forms.Timer(Me.components)
        Me.MenuStrip1.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        Me.SuspendLayout()
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(651, 24)
        Me.MenuStrip1.TabIndex = 0
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ShutUpToolStripMenuItem, Me.ExitToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "File"
        '
        'ShutUpToolStripMenuItem
        '
        Me.ShutUpToolStripMenuItem.Name = "ShutUpToolStripMenuItem"
        Me.ShutUpToolStripMenuItem.Size = New System.Drawing.Size(115, 22)
        Me.ShutUpToolStripMenuItem.Text = "Shut up"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(115, 22)
        Me.ExitToolStripMenuItem.Text = "Exit"
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.btnConnect)
        Me.GroupBox1.Controls.Add(Me.lbl_connstatus)
        Me.GroupBox1.Controls.Add(Me.btnQuickConnect)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 27)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(627, 55)
        Me.GroupBox1.TabIndex = 1
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Connection Status"
        '
        'btnConnect
        '
        Me.btnConnect.Location = New System.Drawing.Point(542, 19)
        Me.btnConnect.Name = "btnConnect"
        Me.btnConnect.Size = New System.Drawing.Size(75, 23)
        Me.btnConnect.TabIndex = 2
        Me.btnConnect.Text = "Connect"
        Me.btnConnect.UseVisualStyleBackColor = True
        '
        'lbl_connstatus
        '
        Me.lbl_connstatus.AutoSize = True
        Me.lbl_connstatus.Location = New System.Drawing.Point(6, 24)
        Me.lbl_connstatus.Name = "lbl_connstatus"
        Me.lbl_connstatus.Size = New System.Drawing.Size(100, 13)
        Me.lbl_connstatus.TabIndex = 1
        Me.lbl_connstatus.Text = "NOT CONNECTED"
        Me.lbl_connstatus.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'btnQuickConnect
        '
        Me.btnQuickConnect.Location = New System.Drawing.Point(438, 19)
        Me.btnQuickConnect.Name = "btnQuickConnect"
        Me.btnQuickConnect.Size = New System.Drawing.Size(98, 23)
        Me.btnQuickConnect.TabIndex = 0
        Me.btnQuickConnect.Text = "Quick Connect"
        Me.btnQuickConnect.UseVisualStyleBackColor = True
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.btnTest)
        Me.GroupBox2.Controls.Add(Me.btnRainbow)
        Me.GroupBox2.Location = New System.Drawing.Point(12, 89)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(226, 89)
        Me.GroupBox2.TabIndex = 2
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Automatic Functions"
        '
        'btnTest
        '
        Me.btnTest.Location = New System.Drawing.Point(112, 26)
        Me.btnTest.Name = "btnTest"
        Me.btnTest.Size = New System.Drawing.Size(97, 50)
        Me.btnTest.TabIndex = 4
        Me.btnTest.Text = "Test"
        Me.btnTest.UseVisualStyleBackColor = True
        '
        'btnRainbow
        '
        Me.btnRainbow.Location = New System.Drawing.Point(9, 26)
        Me.btnRainbow.Name = "btnRainbow"
        Me.btnRainbow.Size = New System.Drawing.Size(97, 50)
        Me.btnRainbow.TabIndex = 3
        Me.btnRainbow.Text = "Rainbow"
        Me.btnRainbow.UseVisualStyleBackColor = True
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.Button7)
        Me.GroupBox3.Controls.Add(Me.txtCLS4)
        Me.GroupBox3.Controls.Add(Me.btnChoseCLS4)
        Me.GroupBox3.Controls.Add(Me.btnPlayCLS4)
        Me.GroupBox3.Controls.Add(Me.txtCLS3)
        Me.GroupBox3.Controls.Add(Me.btnChoseCLS3)
        Me.GroupBox3.Controls.Add(Me.btnPlayCLS3)
        Me.GroupBox3.Controls.Add(Me.txtCLS2)
        Me.GroupBox3.Controls.Add(Me.btnChoseCLS2)
        Me.GroupBox3.Controls.Add(Me.btnPlayCLS2)
        Me.GroupBox3.Controls.Add(Me.txtCLS1)
        Me.GroupBox3.Controls.Add(Me.btnChoseCLS1)
        Me.GroupBox3.Controls.Add(Me.btnPlayCLS1)
        Me.GroupBox3.Location = New System.Drawing.Point(12, 184)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(627, 301)
        Me.GroupBox3.TabIndex = 3
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Christmas Light Show 2016"
        '
        'Button7
        '
        Me.Button7.Location = New System.Drawing.Point(9, 258)
        Me.Button7.Name = "Button7"
        Me.Button7.Size = New System.Drawing.Size(608, 37)
        Me.Button7.TabIndex = 18
        Me.Button7.Text = "Play All"
        Me.Button7.UseVisualStyleBackColor = True
        '
        'txtCLS4
        '
        Me.txtCLS4.Location = New System.Drawing.Point(159, 185)
        Me.txtCLS4.Name = "txtCLS4"
        Me.txtCLS4.ReadOnly = True
        Me.txtCLS4.Size = New System.Drawing.Size(462, 20)
        Me.txtCLS4.TabIndex = 17
        '
        'btnChoseCLS4
        '
        Me.btnChoseCLS4.Location = New System.Drawing.Point(9, 184)
        Me.btnChoseCLS4.Name = "btnChoseCLS4"
        Me.btnChoseCLS4.Size = New System.Drawing.Size(144, 21)
        Me.btnChoseCLS4.TabIndex = 15
        Me.btnChoseCLS4.Text = "Chose Song"
        Me.btnChoseCLS4.UseVisualStyleBackColor = True
        '
        'btnPlayCLS4
        '
        Me.btnPlayCLS4.Location = New System.Drawing.Point(9, 211)
        Me.btnPlayCLS4.Name = "btnPlayCLS4"
        Me.btnPlayCLS4.Size = New System.Drawing.Size(612, 22)
        Me.btnPlayCLS4.TabIndex = 14
        Me.btnPlayCLS4.Text = "Play"
        Me.btnPlayCLS4.UseVisualStyleBackColor = True
        '
        'txtCLS3
        '
        Me.txtCLS3.Location = New System.Drawing.Point(159, 130)
        Me.txtCLS3.Name = "txtCLS3"
        Me.txtCLS3.ReadOnly = True
        Me.txtCLS3.Size = New System.Drawing.Size(462, 20)
        Me.txtCLS3.TabIndex = 13
        '
        'btnChoseCLS3
        '
        Me.btnChoseCLS3.Location = New System.Drawing.Point(9, 129)
        Me.btnChoseCLS3.Name = "btnChoseCLS3"
        Me.btnChoseCLS3.Size = New System.Drawing.Size(144, 21)
        Me.btnChoseCLS3.TabIndex = 11
        Me.btnChoseCLS3.Text = "Chose Song"
        Me.btnChoseCLS3.UseVisualStyleBackColor = True
        '
        'btnPlayCLS3
        '
        Me.btnPlayCLS3.Location = New System.Drawing.Point(9, 156)
        Me.btnPlayCLS3.Name = "btnPlayCLS3"
        Me.btnPlayCLS3.Size = New System.Drawing.Size(612, 22)
        Me.btnPlayCLS3.TabIndex = 10
        Me.btnPlayCLS3.Text = "Play"
        Me.btnPlayCLS3.UseVisualStyleBackColor = True
        '
        'txtCLS2
        '
        Me.txtCLS2.Location = New System.Drawing.Point(159, 75)
        Me.txtCLS2.Name = "txtCLS2"
        Me.txtCLS2.ReadOnly = True
        Me.txtCLS2.Size = New System.Drawing.Size(462, 20)
        Me.txtCLS2.TabIndex = 9
        '
        'btnChoseCLS2
        '
        Me.btnChoseCLS2.Location = New System.Drawing.Point(9, 74)
        Me.btnChoseCLS2.Name = "btnChoseCLS2"
        Me.btnChoseCLS2.Size = New System.Drawing.Size(144, 21)
        Me.btnChoseCLS2.TabIndex = 7
        Me.btnChoseCLS2.Text = "Chose Song"
        Me.btnChoseCLS2.UseVisualStyleBackColor = True
        '
        'btnPlayCLS2
        '
        Me.btnPlayCLS2.Location = New System.Drawing.Point(9, 101)
        Me.btnPlayCLS2.Name = "btnPlayCLS2"
        Me.btnPlayCLS2.Size = New System.Drawing.Size(612, 22)
        Me.btnPlayCLS2.TabIndex = 6
        Me.btnPlayCLS2.Text = "Play"
        Me.btnPlayCLS2.UseVisualStyleBackColor = True
        '
        'txtCLS1
        '
        Me.txtCLS1.Location = New System.Drawing.Point(159, 20)
        Me.txtCLS1.Name = "txtCLS1"
        Me.txtCLS1.ReadOnly = True
        Me.txtCLS1.Size = New System.Drawing.Size(462, 20)
        Me.txtCLS1.TabIndex = 5
        '
        'btnChoseCLS1
        '
        Me.btnChoseCLS1.Location = New System.Drawing.Point(9, 19)
        Me.btnChoseCLS1.Name = "btnChoseCLS1"
        Me.btnChoseCLS1.Size = New System.Drawing.Size(144, 21)
        Me.btnChoseCLS1.TabIndex = 3
        Me.btnChoseCLS1.Text = "Chose Song"
        Me.btnChoseCLS1.UseVisualStyleBackColor = True
        '
        'btnPlayCLS1
        '
        Me.btnPlayCLS1.Location = New System.Drawing.Point(9, 46)
        Me.btnPlayCLS1.Name = "btnPlayCLS1"
        Me.btnPlayCLS1.Size = New System.Drawing.Size(612, 22)
        Me.btnPlayCLS1.TabIndex = 2
        Me.btnPlayCLS1.Text = "Play"
        Me.btnPlayCLS1.UseVisualStyleBackColor = True
        '
        'btnEstop
        '
        Me.btnEstop.BackColor = System.Drawing.Color.Red
        Me.btnEstop.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.btnEstop.Font = New System.Drawing.Font("Segoe UI Black", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnEstop.Location = New System.Drawing.Point(124, 26)
        Me.btnEstop.Name = "btnEstop"
        Me.btnEstop.Size = New System.Drawing.Size(128, 50)
        Me.btnEstop.TabIndex = 4
        Me.btnEstop.Text = "EMERGENCY STOP (RESETS uC)"
        Me.btnEstop.UseVisualStyleBackColor = False
        '
        'btnStop
        '
        Me.btnStop.Location = New System.Drawing.Point(6, 26)
        Me.btnStop.Name = "btnStop"
        Me.btnStop.Size = New System.Drawing.Size(112, 50)
        Me.btnStop.TabIndex = 5
        Me.btnStop.Text = "Pattern Stop (Turns off all LEDs once pattern is complete)"
        Me.btnStop.UseVisualStyleBackColor = True
        '
        'GroupBox4
        '
        Me.GroupBox4.Controls.Add(Me.btnStop)
        Me.GroupBox4.Controls.Add(Me.btnEstop)
        Me.GroupBox4.Location = New System.Drawing.Point(377, 89)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(262, 89)
        Me.GroupBox4.TabIndex = 6
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Stop"
        '
        'OpenFileDialog1
        '
        Me.OpenFileDialog1.FileName = "OpenFileDialog1"
        '
        'tmrUpdatePorts
        '
        Me.tmrUpdatePorts.Enabled = True
        Me.tmrUpdatePorts.Interval = 1500
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(651, 497)
        Me.Controls.Add(Me.GroupBox4)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.MenuStrip1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Light Show Project 2016"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox4.ResumeLayout(False)
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents lbl_connstatus As System.Windows.Forms.Label
    Friend WithEvents btnQuickConnect As System.Windows.Forms.Button
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents btnPlayCLS1 As System.Windows.Forms.Button
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents SerialPort1 As System.IO.Ports.SerialPort
    Friend WithEvents btnRainbow As System.Windows.Forms.Button
    Friend WithEvents btnEstop As System.Windows.Forms.Button
    Friend WithEvents btnStop As System.Windows.Forms.Button
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents btnChoseCLS1 As System.Windows.Forms.Button
    Friend WithEvents btnTest As System.Windows.Forms.Button
    Friend WithEvents txtCLS1 As System.Windows.Forms.TextBox
    Friend WithEvents OpenFileDialog1 As System.Windows.Forms.OpenFileDialog
    Friend WithEvents ShutUpToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents Button7 As System.Windows.Forms.Button
    Friend WithEvents txtCLS4 As System.Windows.Forms.TextBox
    Friend WithEvents btnChoseCLS4 As System.Windows.Forms.Button
    Friend WithEvents btnPlayCLS4 As System.Windows.Forms.Button
    Friend WithEvents txtCLS3 As System.Windows.Forms.TextBox
    Friend WithEvents btnChoseCLS3 As System.Windows.Forms.Button
    Friend WithEvents btnPlayCLS3 As System.Windows.Forms.Button
    Friend WithEvents txtCLS2 As System.Windows.Forms.TextBox
    Friend WithEvents btnChoseCLS2 As System.Windows.Forms.Button
    Friend WithEvents btnPlayCLS2 As System.Windows.Forms.Button
    Friend WithEvents btnConnect As System.Windows.Forms.Button
    Friend WithEvents tmrUpdatePorts As System.Windows.Forms.Timer

End Class
