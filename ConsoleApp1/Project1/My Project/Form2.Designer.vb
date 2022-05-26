<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Yuh
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
        Me.btndie = New System.Windows.Forms.Button()
        Me.btnmurder = New System.Windows.Forms.Button()
        Me.lblone = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btndie
        '
        Me.btndie.Location = New System.Drawing.Point(80, 238)
        Me.btndie.Name = "btndie"
        Me.btndie.Size = New System.Drawing.Size(242, 56)
        Me.btndie.TabIndex = 0
        Me.btndie.Text = "Kill Yourself"
        Me.btndie.UseVisualStyleBackColor = True
        '
        'btnmurder
        '
        Me.btnmurder.Location = New System.Drawing.Point(474, 238)
        Me.btnmurder.Name = "btnmurder"
        Me.btnmurder.Size = New System.Drawing.Size(242, 56)
        Me.btnmurder.TabIndex = 1
        Me.btnmurder.Text = "Pay someone to murder you"
        Me.btnmurder.UseVisualStyleBackColor = True
        '
        'lblone
        '
        Me.lblone.AutoSize = True
        Me.lblone.Location = New System.Drawing.Point(332, 96)
        Me.lblone.Name = "lblone"
        Me.lblone.Size = New System.Drawing.Size(96, 13)
        Me.lblone.TabIndex = 2
        Me.lblone.Text = "Choose your death"
        '
        'Yuh
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.lblone)
        Me.Controls.Add(Me.btnmurder)
        Me.Controls.Add(Me.btndie)
        Me.Name = "Yuh"
        Me.Text = "Form2"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btndie As Windows.Forms.Button
    Friend WithEvents btnmurder As Windows.Forms.Button
    Friend WithEvents lblone As Windows.Forms.Label
End Class
