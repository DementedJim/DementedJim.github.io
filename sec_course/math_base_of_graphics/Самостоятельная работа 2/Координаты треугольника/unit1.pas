unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Edit5: TEdit;
    Edit6: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    procedure Button1Click(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
var
  x1,x2,x3,y1,y2,y3:integer;
begin
Image1.Canvas.Rectangle(0,0, 521,264);
x1:=StrtoInt(Edit1.Text);
y1:=StrtoInt(Edit2.Text);
x2:=StrtoInt(Edit4.Text);
y2:=StrtoInt(Edit3.Text);
x3:=StrtoInt(Edit5.Text);
y3:=StrtoInt(Edit6.Text);
Image1.Canvas.MoveTo(x1, y1);
Image1.Canvas.pen.Color:= clblue;
Image1.Canvas.LineTo(x2,y2);
Image1.Canvas.pen.Color:= clRed;
Image1.Canvas.LineTo(x3,y3);
Image1.Canvas.pen.Color := clBlack;
Image1.Canvas.LineTo(x1,y1);
end;

end.

