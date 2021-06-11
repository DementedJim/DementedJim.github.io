program project1;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
  {$ENDIF}{$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Forms, Unit1, tachartlazaruspkg;

{$R *.res}

begin
  RequireDerivedFormResource:=True;
  Application.Initialize;
  Application.Run;
end.

