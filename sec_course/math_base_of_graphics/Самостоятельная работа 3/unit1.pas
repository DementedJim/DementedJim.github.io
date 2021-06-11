unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, TAGraph, TAFuncSeries, TASeries, TASources,
  Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Image1: TImage;
    StartButton: TButton;
    KA: TEdit;
    KB: TEdit;
    KC: TEdit;
    StaticText1: TStaticText;
    StaticText2: TStaticText;
    XMN: TEdit;
    YMN: TEdit;
    XMX: TEdit;
    YMX: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    procedure KAChange(Sender: TObject);
    procedure KAKeyPress(Sender: TObject; var Key: char);
    procedure KBKeyPress(Sender: TObject; var Key: char);
    procedure StartButtonClick(Sender: TObject);

  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }


procedure TForm1.StartButtonClick(Sender: TObject);
var
x0,y0,xmin,xmax,ymin,ymax,a,b,c,xsc,ysc:integer;
x,y,x1,x2,kx,ky:real;
begin
  Image1.Picture.Bitmap := nil;
  a:=StrtoInt(KA.Text);
  b:=StrtoInt(KB.Text);
  c:=StrtoInt(KC.Text);
  if ((a=0) and (b=0) and (c=0)) then  StaticText1.Visible:=True
  else begin
  xmin := StrtoInt(XMN.Text);
  xmax := StrtoInt(XMX.Text);
  ymin := StrtoInt(YMN.Text);
  ymax := StrtoInt(YMX.Text);
  x1:=(-b-sqrt(b*b-4*a*c)/2/a);
  x2:=(-b+sqrt(b*b-4*a*c)/2/a);
  with Image1 do
   begin
     x0 := Width div 2;
     y0 := Height div 2;
     ky := Height /( ymax-ymin);
     kx := Width / (xmax-xmin);
     with Canvas do
      begin
        Pen.Color := ClWhite;
        Pen.Width := 1;
        MoveTo(0,y0);
        LineTo(width,y0);
        MoveTo(x0,0);
        LineTo(x0,Height);

        Pen.Color := ClRed;
        Pen.Width := 2;
        x:=xmin;
        MoveTo(xmin, round(a*x*x+b*x+c));
        while x<x1 do
              begin
              y:=1/(a*x*x+b*x+c);
              Xsc:=round((x-xmin)*Kx);
              Ysc:=round(Height-(y-ymin)*Ky);
              LineTo(Xsc,Ysc);
              x:=x+0.01;
              end;
        y:=1/(a*x*x+b*x+c);
        Xsc:=round((x-xmin)*Kx);
        Ysc:=round(Height-(y-ymin)*Ky);
        MoveTo(Xsc,Ysc);
        while x<x2 do
              begin
              y:=1/(a*x*x+b*x+c);
              Xsc:=round((x-xmin)*Kx);
              Ysc:=round(Height-(y-ymin)*Ky);
              LineTo(Xsc,Ysc);
              x:=x+0.01;
              end;
          y:=1/(a*x*x+b*x+c);
        Xsc:=round((x-xmin)*Kx);
        Ysc:=round(Height-(y-ymin)*Ky);
        MoveTo(Xsc,Ysc);
        while x<xmax do
              begin
              y:=1/(a*x*x+b*x+c);
              Xsc:=round((x-xmin)*Kx);
              Ysc:=round(Height-(y-ymin)*Ky);
              LineTo(Xsc,Ysc);
              x:=x+0.01;
              end;
         end;
      end;
      end;
   end;


procedure TForm1.KAChange(Sender: TObject);
begin
  if (KA.Text='') or (KB.Text='') or (KC.Text='') or (XMN.Text='') or (XMX.Text='') or (YMN.Text='') or (YMX.Text='') then StartButton.Enabled:=false
  else StartButton.Enabled:=True;
end;

procedure TForm1.KAKeyPress(Sender: TObject; var Key: char);
begin
   case Key of
   '0'..'9',#8:;
    else Key:=chr(0);
   end;
end;

procedure TForm1.KBKeyPress(Sender: TObject; var Key: char);
begin
   case Key of
   '0'..'9',#8:;
    else Key:=chr(0);
   end;
end;




end.

