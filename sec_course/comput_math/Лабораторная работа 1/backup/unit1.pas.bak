unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Unit2, Unit3,
  StdCtrls;

type

  { TMainPoint }

  TMainPoint = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Label1: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  MainPoint: TMainPoint;

implementation

{$R *.lfm}

{ TMainPoint }

procedure TMainPoint.Button1Click(Sender: TObject);
begin
  MainPoint.Visible:=false;
  ConstStep.Visible:=true;
  If (ConstStep.Visible=false) then MainPoint.Enabled:= true;
end;

procedure TMainPoint.Button2Click(Sender: TObject);
begin
  MainPoint.Visible:=false;
  VariableStep.Visible:=true;
  If (VariableStep.Visible=false) then MainPoint.Enabled:= true;
end;

procedure TMainPoint.Button3Click(Sender: TObject);
begin
  MainPoint.close;
end;

procedure TMainPoint.FormCreate(Sender: TObject);
begin

end;

end.

