
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Application_Create(AOwner: TComponent): TApplication; extdecl;
begin
  Result :=  TApplication.Create(AOwner);
end;

procedure Application_Free(AObj: TApplication); extdecl;
begin
  AObj.Free;
end;

procedure Application_ActivateHint(AObj: TApplication; var CursorPos: TPoint); extdecl;
begin
  AObj.ActivateHint(CursorPos);
end;

procedure Application_BringToFront(AObj: TApplication); extdecl;
begin
  AObj.BringToFront;
end;

procedure Application_CancelHint(AObj: TApplication); extdecl;
begin
  AObj.CancelHint;
end;

procedure Application_HandleMessage(AObj: TApplication); extdecl;
begin
  AObj.HandleMessage;
end;

procedure Application_HideHint(AObj: TApplication); extdecl;
begin
  AObj.HideHint;
end;

procedure Application_Minimize(AObj: TApplication); extdecl;
begin
  AObj.Minimize;
end;

procedure Application_ModalStarted(AObj: TApplication); extdecl;
begin
  AObj.ModalStarted;
end;

procedure Application_ModalFinished(AObj: TApplication); extdecl;
begin
  AObj.ModalFinished;
end;

procedure Application_ProcessMessages(AObj: TApplication); extdecl;
begin
  AObj.ProcessMessages;
end;

procedure Application_Restore(AObj: TApplication); extdecl;
begin
  AObj.Restore;
end;

procedure Application_Terminate(AObj: TApplication); extdecl;
begin
  AObj.Terminate;
end;

function Application_MessageBox(AObj: TApplication; Text: PChar; Caption: PChar; Flags: Integer): Integer; extdecl;
begin
  Result :=  AObj.MessageBox(Text, Caption, Flags);
end;

function Application_FindComponent(AObj: TApplication; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Application_GetNamePath(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function Application_HasParent(AObj: TApplication): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Application_Assign(AObj: TApplication; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Application_ClassType(AObj: TApplication): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Application_ClassName(AObj: TApplication): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Application_InstanceSize(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Application_InheritsFrom(AObj: TApplication; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Application_Equals(AObj: TApplication; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Application_GetHashCode(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Application_ToString(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Application_GetExeName(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.ExeName);
end;

function Application_GetHint(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Application_SetHint(AObj: TApplication; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function Application_GetHintColor(AObj: TApplication): TColor; extdecl;
begin
  Result :=  AObj.HintColor;
end;

procedure Application_SetHintColor(AObj: TApplication; AValue: TColor); extdecl;
begin
  AObj.HintColor := AValue;
end;

function Application_GetHintHidePause(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.HintHidePause;
end;

procedure Application_SetHintHidePause(AObj: TApplication; AValue: Integer); extdecl;
begin
  AObj.HintHidePause := AValue;
end;

function Application_GetHintPause(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.HintPause;
end;

procedure Application_SetHintPause(AObj: TApplication; AValue: Integer); extdecl;
begin
  AObj.HintPause := AValue;
end;

function Application_GetHintShortCuts(AObj: TApplication): LongBool; extdecl;
begin
  Result :=  AObj.HintShortCuts;
end;

procedure Application_SetHintShortCuts(AObj: TApplication; AValue: LongBool); extdecl;
begin
  AObj.HintShortCuts := AValue;
end;

function Application_GetHintShortPause(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.HintShortPause;
end;

procedure Application_SetHintShortPause(AObj: TApplication; AValue: Integer); extdecl;
begin
  AObj.HintShortPause := AValue;
end;

function Application_GetIcon(AObj: TApplication): TIcon; extdecl;
begin
  Result :=  AObj.Icon;
end;

procedure Application_SetIcon(AObj: TApplication; AValue: TIcon); extdecl;
begin
  AObj.Icon := AValue;
end;

function Application_GetMainForm(AObj: TApplication): TForm; extdecl;
begin
  Result :=  AObj.MainForm;
end;

function Application_GetMainFormHandle(AObj: TApplication): HWND; extdecl;
begin
  Result :=  AObj.MainFormHandle;
end;

function Application_GetMainFormOnTaskBar(AObj: TApplication): LongBool; extdecl;
begin
  Result :=  AObj.MainFormOnTaskBar;
end;

procedure Application_SetMainFormOnTaskBar(AObj: TApplication; AValue: LongBool); extdecl;
begin
  AObj.MainFormOnTaskBar := AValue;
end;

function Application_GetBiDiMode(AObj: TApplication): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Application_SetBiDiMode(AObj: TApplication; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Application_GetShowHint(AObj: TApplication): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Application_SetShowHint(AObj: TApplication; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function Application_GetShowMainForm(AObj: TApplication): LongBool; extdecl;
begin
  Result :=  AObj.ShowMainForm;
end;

procedure Application_SetShowMainForm(AObj: TApplication; AValue: LongBool); extdecl;
begin
  AObj.ShowMainForm := AValue;
end;

function Application_GetTitle(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.Title);
end;

procedure Application_SetTitle(AObj: TApplication; AValue: PChar); extdecl;
begin
  AObj.Title := AValue;
end;

procedure Application_SetOnException(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnException := nil;
    EventClass.Remove(AObj, geException);
    Exit;
  end;
  AObj.OnException := @EventClass.OnException;
  EventClass.Add(AObj, geException, AEventId);
end;

procedure Application_SetOnHelp(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnHelp := nil;
    EventClass.Remove(AObj, geHelp);
    Exit;
  end;
  AObj.OnHelp := @EventClass.OnHelp;
  EventClass.Add(AObj, geHelp, AEventId);
end;

procedure Application_SetOnHint(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnHint := nil;
    EventClass.Remove(AObj, geHint);
    Exit;
  end;
  AObj.OnHint := @EventClass.OnHint;
  EventClass.Add(AObj, geHint, AEventId);
end;

procedure Application_SetOnMinimize(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMinimize := nil;
    EventClass.Remove(AObj, geMinimize);
    Exit;
  end;
  AObj.OnMinimize := @EventClass.OnMinimize;
  EventClass.Add(AObj, geMinimize, AEventId);
end;

procedure Application_SetOnRestore(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnRestore := nil;
    EventClass.Remove(AObj, geRestore);
    Exit;
  end;
  AObj.OnRestore := @EventClass.OnRestore;
  EventClass.Add(AObj, geRestore, AEventId);
end;

procedure Application_SetOnShortCut(AObj: TApplication; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnShortCut := nil;
    EventClass.Remove(AObj, geShortCut);
    Exit;
  end;
  AObj.OnShortCut := @EventClass.OnShortCut;
  EventClass.Add(AObj, geShortCut, AEventId);
end;

function Application_GetComponentCount(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Application_GetComponentIndex(AObj: TApplication): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Application_SetComponentIndex(AObj: TApplication; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Application_GetOwner(AObj: TApplication): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function Application_GetName(AObj: TApplication): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Application_SetName(AObj: TApplication; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function Application_GetTag(AObj: TApplication): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Application_SetTag(AObj: TApplication; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function Application_GetComponents(AObj: TApplication; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function Application_StaticClassType: TClass; extdecl;
begin
  Result := TApplication;
end;

exports
  Application_Create,
  Application_Free,
  Application_ActivateHint,
  Application_BringToFront,
  Application_CancelHint,
  Application_HandleMessage,
  Application_HideHint,
  Application_Minimize,
  Application_ModalStarted,
  Application_ModalFinished,
  Application_ProcessMessages,
  Application_Restore,
  Application_Terminate,
  Application_MessageBox,
  Application_FindComponent,
  Application_GetNamePath,
  Application_HasParent,
  Application_Assign,
  Application_ClassType,
  Application_ClassName,
  Application_InstanceSize,
  Application_InheritsFrom,
  Application_Equals,
  Application_GetHashCode,
  Application_ToString,
  Application_GetExeName,
  Application_GetHint,
  Application_SetHint,
  Application_GetHintColor,
  Application_SetHintColor,
  Application_GetHintHidePause,
  Application_SetHintHidePause,
  Application_GetHintPause,
  Application_SetHintPause,
  Application_GetHintShortCuts,
  Application_SetHintShortCuts,
  Application_GetHintShortPause,
  Application_SetHintShortPause,
  Application_GetIcon,
  Application_SetIcon,
  Application_GetMainForm,
  Application_GetMainFormHandle,
  Application_GetMainFormOnTaskBar,
  Application_SetMainFormOnTaskBar,
  Application_GetBiDiMode,
  Application_SetBiDiMode,
  Application_GetShowHint,
  Application_SetShowHint,
  Application_GetShowMainForm,
  Application_SetShowMainForm,
  Application_GetTitle,
  Application_SetTitle,
  Application_SetOnException,
  Application_SetOnHelp,
  Application_SetOnHint,
  Application_SetOnMinimize,
  Application_SetOnRestore,
  Application_SetOnShortCut,
  Application_GetComponentCount,
  Application_GetComponentIndex,
  Application_SetComponentIndex,
  Application_GetOwner,
  Application_GetName,
  Application_SetName,
  Application_GetTag,
  Application_SetTag,
  Application_GetComponents,
  Application_StaticClassType;

