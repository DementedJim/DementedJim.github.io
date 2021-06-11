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
    KA: TEdit;
    KB: TEdit;
    xmn: TEdit;
    xmx: TEdit;
    ymn: TEdit;
    ymx: TEdit;
    Kn: TEdit;
    res: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    procedure Button1Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

function f(x:real):real;
begin
x := (sin(0.5 * x + 0.4)) / (1.2 + cos(x * x + 0.4));
end;

procedure TForm1.Button1Click(Sender: TObject);
var a,b,xmin,xmax,ymin,ymax,x,y,ysc,xsc,sum,i,h:real;
x0,y0,n:integer;
begin
Image1.Picture.Bitmap := nil;
x0:=Image1.Width div 2;
y0:=Image1.Height div 2;
Image1.Canvas.Brush.Color:=ClWhite;
Image1.Canvas.Rectangle(0,0,width,height);
Image1.canvas.Pen.color:=clBlack;
Image1.Canvas.Line(0,y0,Image1.Width,y0);
Image1.Canvas.Line(x0,0,x0,Image1.Height);
Image1.Canvas.Brush.Style := bsClear;
a := StrtoFloat(KA.Text);
b := StrtoFloat(KB.Text);
n := StrtoInt(Kn.Text);
xmin := StrtoFloat(xmn.Text);
xmax := StrtoFloat(xmx.Text);
ymin := StrtoFloat(ymn.Text);
ymax := StrtoFloat(ymx.Text);
x:=xmin;
y:=f(x);
Image1.canvas.MoveTo(x0+round(x*(Image1.Width/(xmax-xmin))),y0-round(y*(Image1.Height/(ymax-ymin))));
while (x<xmax) do
begin
y:=f(x);
xsc:=(x-xmin)*(Image1.Width/(xmax-xmin));
ysc:=Image1.Height-(y-ymin)*(Image1.Height/(ymax-ymin));
Image1.canvas.Lineto(round(xsc),round(ysc));
x:=x+((xmax - xmin)/100);
end;
Image1.canvas.Pen.color:=clred;
h:=(b-a)/n;
x:=a;
sum:=0;
while x<=(b-h) do begin
Image1.Canvas.Rectangle(round((x-xmin)*(Image1.Width/(xmax-xmin))),y0,round((x-xmin+h)*(Image1.Width/(xmax-xmin))),round(Image1.Height-(f(x)-ymin)*(Image1.Height/(ymax-ymin))));
sum:=sum+f(x);
x:=x+h;
end;
i:=sum*h;
res.text:=FloattoStr(i);
end;

end.

