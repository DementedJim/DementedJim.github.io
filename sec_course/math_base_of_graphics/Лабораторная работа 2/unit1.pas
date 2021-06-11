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
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    procedure Button1Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }


procedure TForm1.Button1Click(Sender: TObject);
var N, i: integer;
  R, x, y: real;
begin
N:=StrToInt(Edit1.Text);
R:=StrToInt(Edit2.Text);
Image1.Canvas.Rectangle(0, 0, Image1.Width,Image1.Height);
Image1.Canvas.MoveTo(round((Image1.Width)div 2+R),(Image1.Height) div 2);
For i:=0 to N do
Begin
x:=(Image1.Width)/2+r*cos((2*pi*i)/N);
y:=(Image1.Height)/2+r*sin((2*pi*i)/N);
Image1.Canvas.LineTo(round(x),round(y));
end;
end;

end.

