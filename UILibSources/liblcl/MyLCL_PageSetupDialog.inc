
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function PageSetupDialog_Create(AOwner: TComponent): TPageSetupDialog; extdecl;
begin
  Result :=  TPageSetupDialog.Create(AOwner);
end;

procedure PageSetupDialog_Free(AObj: TPageSetupDialog); extdecl;
begin
  AObj.Free;
end;

function PageSetupDialog_Execute(AObj: TPageSetupDialog): LongBool; extdecl;
begin
  Result :=  AObj.Execute;
end;

function PageSetupDialog_FindComponent(AObj: TPageSetupDialog; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PageSetupDialog_GetNamePath(AObj: TPageSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function PageSetupDialog_HasParent(AObj: TPageSetupDialog): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PageSetupDialog_Assign(AObj: TPageSetupDialog; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function PageSetupDialog_ClassType(AObj: TPageSetupDialog): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function PageSetupDialog_ClassName(AObj: TPageSetupDialog): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function PageSetupDialog_InstanceSize(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function PageSetupDialog_InheritsFrom(AObj: TPageSetupDialog; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function PageSetupDialog_Equals(AObj: TPageSetupDialog; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PageSetupDialog_GetHashCode(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PageSetupDialog_ToString(AObj: TPageSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function PageSetupDialog_GetUnits(AObj: TPageSetupDialog): TPageMeasureUnits; extdecl;
begin
  Result :=  AObj.Units;
end;

function PageSetupDialog_GetHandle(AObj: TPageSetupDialog): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

procedure PageSetupDialog_SetOnClose(AObj: TPageSetupDialog; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    EventClass.Remove(AObj, geClose);
    Exit;
  end;
  AObj.OnClose := @EventClass.OnClose;
  EventClass.Add(AObj, geClose, AEventId);
end;

procedure PageSetupDialog_SetOnShow(AObj: TPageSetupDialog; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    EventClass.Remove(AObj, geShow);
    Exit;
  end;
  AObj.OnShow := @EventClass.OnShow;
  EventClass.Add(AObj, geShow, AEventId);
end;

function PageSetupDialog_GetComponentCount(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PageSetupDialog_GetComponentIndex(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PageSetupDialog_SetComponentIndex(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PageSetupDialog_GetOwner(AObj: TPageSetupDialog): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function PageSetupDialog_GetName(AObj: TPageSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure PageSetupDialog_SetName(AObj: TPageSetupDialog; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function PageSetupDialog_GetTag(AObj: TPageSetupDialog): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PageSetupDialog_SetTag(AObj: TPageSetupDialog; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function PageSetupDialog_GetComponents(AObj: TPageSetupDialog; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function PageSetupDialog_StaticClassType: TClass; extdecl;
begin
  Result := TPageSetupDialog;
end;

exports
  PageSetupDialog_Create,
  PageSetupDialog_Free,
  PageSetupDialog_Execute,
  PageSetupDialog_FindComponent,
  PageSetupDialog_GetNamePath,
  PageSetupDialog_HasParent,
  PageSetupDialog_Assign,
  PageSetupDialog_ClassType,
  PageSetupDialog_ClassName,
  PageSetupDialog_InstanceSize,
  PageSetupDialog_InheritsFrom,
  PageSetupDialog_Equals,
  PageSetupDialog_GetHashCode,
  PageSetupDialog_ToString,
  PageSetupDialog_GetUnits,
  PageSetupDialog_GetHandle,
  PageSetupDialog_SetOnClose,
  PageSetupDialog_SetOnShow,
  PageSetupDialog_GetComponentCount,
  PageSetupDialog_GetComponentIndex,
  PageSetupDialog_SetComponentIndex,
  PageSetupDialog_GetOwner,
  PageSetupDialog_GetName,
  PageSetupDialog_SetName,
  PageSetupDialog_GetTag,
  PageSetupDialog_SetTag,
  PageSetupDialog_GetComponents,
  PageSetupDialog_StaticClassType;

