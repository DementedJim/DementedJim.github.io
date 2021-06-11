unit Unit3;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TVariableStep }

  TVariableStep = class(TForm)
    FirstAlg: TButton;
    Label3: TLabel;
    nEdit: TEdit;
    EpsEdit: TEdit;
    Label2: TLabel;
    SecAlgMethod: TEdit;
    FirstAlgMethod: TEdit;
    Image1: TImage;
    Label1: TLabel;
    SecAlg: TButton;
    EscapeButton: TButton;
    procedure EscapeButtonClick(Sender: TObject);
    procedure FirstAlgClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure SecAlgClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  VariableStep: TVariableStep;

implementation
Uses Unit1;
{$R *.lfm}

{ TVariableStep }

procedure TVariableStep.EscapeButtonClick(Sender: TObject);
begin
  VariableStep.close;
  MainPoint.Visible:=true;
  MainPoint.Show;
end;

procedure TVariableStep.FirstAlgClick(Sender: TObject);
var a,b,n,h,eps,ln,l2n,R,S2,x,intg:real;
begin
a:=0;
b:=1;
n:=StrtoFloat(nEdit.Text);
eps:=StrtoFloat(EpsEdit.Text);
h:=(b-a)/n;
ln:=0;
l2n:=0;
R:=0;
S2:=0;
x:=a;
while (R<eps) do begin
  S2:=0;
  x:=a;
  while (x<=(b-h)) do begin
    S2:= S2+exp(-(x*x));
    x:=x+h;
  end;
l2n:=h*S2;
R:=abs(ln-l2n);
ln:=l2n;
h:=h/2;
intg:=l2n+h+h;
FirstAlgMethod.Text:=FloattoStr(intg);
end;
end;

procedure TVariableStep.FormShow(Sender: TObject);
begin
  Image1.Picture.LoadFromFile('D:\YandexDisk\Скриншоты\2018-09-30_15-27-00.png');
end;

procedure TVariableStep.SecAlgClick(Sender: TObject);
var n,a,b,h,eps,l,l2,R,s,x:real;

begin
  a:=0;
  b:=1;
  n:=StrtoFloat(nEdit.Text);
  eps:=StrtoFloat(EpsEdit.Text);
  h:=(b-a)/n;
  l:=0;
  l2:=0;
  R:=0;
  while R<eps do begin
    s:=0;
    x:=a;
    while(x<=b-h) do begin
      s:=s+exp(-(x*x));
      x:=x+h;
    end;
    l2:=h*s;
	R:=abs(l-l2);
    l:=l2;
    h:=h/2;
  end;
  n:=(l2);
 SecAlgMethod.Text:=FloattoStr(n);
end;


end.

