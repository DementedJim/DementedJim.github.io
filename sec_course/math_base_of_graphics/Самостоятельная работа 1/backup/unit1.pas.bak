unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  Spin;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Button4: TButton;
    Edit3: TEdit;
    FloatSpinEdit1: TFloatSpinEdit;
    FloatSpinEdit2: TFloatSpinEdit;
    StaticText2: TStaticText;
    StaticText3: TStaticText;
    StaticText4: TStaticText;
    StaticText5: TStaticText;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
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
var a, b, result:real;
begin
  a:=StrToFloat(FloatSpinEdit1.Text);
  b:=StrToFloat(FloatSpinEdit2.Text);
  result:=a+b;
  edit3.Text:=FloatToStr(result);
end;

procedure TForm1.Button2Click(Sender: TObject);
var a, b, result:real;
  error:string;
begin
  a:=StrToFloat(FloatSpinEdit1.Text);
  b:=StrToFloat(FloatSpinEdit2.Text);
  error:='Деление на ноль невозможно';
  if (b=0) then edit3.Text:=error
  else
    begin
      result:=a/b;
      edit3.Text:=FloatToStr(result);
      end;
end;

procedure TForm1.Button3Click(Sender: TObject);
var a,b,result:real;
begin
a:=StrToFloat(FloatSpinEdit1.Text);
  b:=StrToFloat(FloatSpinEdit2.Text);
  result:=a*b;
  edit3.Text:=FloatToStr(result);
end;

procedure TForm1.Button4Click(Sender: TObject);
var a,b,result:real;
begin
  a:=StrToFloat(FloatSpinEdit1.Text);
  b:=StrToFloat(FloatSpinEdit2.Text);
  result:=a-b;
  edit3.Text:=FloatToStr(result);
end;

end.



