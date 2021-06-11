unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Image1: TImage;
    Label1: TLabel;
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
var x1,x2,x3,x4,y1,y2,y3,y4:integer;
begin
Image1.Canvas.Rectangle(0,0,500,500);
Image1.canvas.pen.color:=clblack;
Image1.Canvas.Brush.Style:=bsClear;
Image1.Canvas.Rectangle (20,20,70,70);
Image1.Canvas.Rectangle (40,40,90,90);
Image1.Canvas.moveto(20,20);
Image1.Canvas.lineto(40,40);
Image1.Canvas.moveto(40,89);
Image1.Canvas.lineto(20,69);
Image1.Canvas.moveto(89,40);
Image1.Canvas.lineto(69,20);
Image1.Canvas.moveto(89,89);
Image1.Canvas.lineto(69,69);
Image1.Canvas.Ellipse(185,150,100,100);
Image1.Canvas.Ellipse(185,215,100,175);
Image1.Canvas.MoveTo(100,125);
Image1.Canvas.LineTo(100,195);
Image1.Canvas.MoveTo(185,125);
Image1.Canvas.LineTo(185,195);
end;

end.

