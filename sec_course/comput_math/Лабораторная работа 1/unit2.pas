unit Unit2;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TConstStep }

  TConstStep = class(TForm)
    Step: TEdit;
    Image1: TImage;
    StepHeader: TLabel;
    ParabolaMethod: TEdit;
    TrapezeMethod: TEdit;
    LeftPartsMethod: TEdit;
    RightPartsMethod: TEdit;
    Escape: TButton;
    Label1: TLabel;
    Parabola: TButton;
    Trapeze: TButton;
    LeftParts: TButton;
    RightParts: TButton;
    procedure EscapeClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure LeftPartsClick(Sender: TObject);
    procedure ParabolaClick(Sender: TObject);
    procedure RightPartsClick(Sender: TObject);
    procedure TrapezeClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  ConstStep: TConstStep;

implementation
Uses Unit1;

{$R *.lfm}

{ TConstStep }

procedure TConstStep.EscapeClick(Sender: TObject);
begin
  ConstStep.close;
  MainPoint.Visible:=true;
  MainPoint.Show;
end;

procedure TConstStep.FormShow(Sender: TObject);
begin
  Image1.Picture.LoadFromFile('D:\YandexDisk\Скриншоты\2018-09-30_15-27-00.png');
end;

procedure TConstStep.LeftPartsClick(Sender: TObject);
var h,x,a,b,s, intg, n:real;
begin
  a:=0;
  b:=1;
  n:=StrtoFloat(Step.Text);
  h:= (b-a)/n;
  s:=0;
  x:=a;
  while x<=(b-h) do
        begin
             s:= s+exp(-(x*x));
             x:= x+h;
        end;
  intg:= h*s;
  LeftPartsMethod.Text:=FloattoStr(intg);
end;

procedure TConstStep.ParabolaClick(Sender: TObject);
var h,x,a,b,s1,s2,intg,n,ya,yb :real;
begin
  a:=0;
  b:=1;
  n:=StrtoFloat(Step.Text);
  h:= (b-a)/(2*n);
  s1:=0;
  s2:=0;
  ya:=exp(-(a*a));
  yb:=exp(-(b*b));
  x:=a+h;
  while x<=(b-h) do
        begin
             s1:=s1+exp(-(x*x));
             x:=x+2*h;
        end;
  x:=a+2*h;
  while x<=(b-2*h) do
        begin
             s2:=s2+exp(-(x*x));
             x:=x+2*h;
        end;
  intg:= (h/3)*(ya+4*s1+2*s2+yb);
  ParabolaMethod.Text:=FloattoStr(intg);
end;


procedure TConstStep.RightPartsClick(Sender: TObject);
var h,x,a,b,s, intg, n:real;
begin
  a:=0;
  b:=1;
  n:=StrtoFloat(Step.Text);
  h:= (b-a)/n;
  s:=0;
  x:=a+h;
  while x<=b do
        begin
             s:= s+exp(-(x*x));
             x:= x+h;
        end;
  intg:= h*s;
  RightPartsMethod.Text:=FloattoStr(intg);
end;

procedure TConstStep.TrapezeClick(Sender: TObject);
var h,x,a,b,s, intg, n, ya, yb:real;
begin
  a:=0;
  b:=1;
  n:=StrtoFloat(Step.Text);
  h:= (b-a)/n;
  s:=0;
  x:=a+h;
  ya:=exp(-(a*a));
  yb:=exp(-(b*b));
  while x<=(b-h) do
        begin
             s:= s+exp(-(x*x));
             x:= x+h;
        end;
  intg:= h*(((ya+yb)/2)+s);
  TrapezeMethod.Text:=FloattoStr(intg);

end;

end.

