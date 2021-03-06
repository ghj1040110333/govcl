
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function TrackBar_Create(AOwner: TComponent): TTrackBar; stdcall;
begin
  Result :=  TTrackBar.Create(AOwner);
end;

procedure TrackBar_Free(AObj: TTrackBar); stdcall;
begin
  AObj.Free;
end;

procedure TrackBar_SetTick(AObj: TTrackBar; Value: Integer); stdcall;
begin
  AObj.SetTick(Value);
end;

function TrackBar_CanFocus(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function TrackBar_ContainsControl(AObj: TTrackBar; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function TrackBar_ControlAtPos(AObj: TTrackBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure TrackBar_DisableAlign(AObj: TTrackBar); stdcall;
begin
  AObj.DisableAlign;
end;

procedure TrackBar_EnableAlign(AObj: TTrackBar); stdcall;
begin
  AObj.EnableAlign;
end;

function TrackBar_FindChildControl(AObj: TTrackBar; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure TrackBar_FlipChildren(AObj: TTrackBar; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function TrackBar_Focused(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function TrackBar_HandleAllocated(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure TrackBar_InsertControl(AObj: TTrackBar; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure TrackBar_Invalidate(AObj: TTrackBar); stdcall;
begin
  AObj.Invalidate;
end;

procedure TrackBar_PaintTo(AObj: TTrackBar; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure TrackBar_RemoveControl(AObj: TTrackBar; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure TrackBar_Realign(AObj: TTrackBar); stdcall;
begin
  AObj.Realign;
end;

procedure TrackBar_Repaint(AObj: TTrackBar); stdcall;
begin
  AObj.Repaint;
end;

procedure TrackBar_ScaleBy(AObj: TTrackBar; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure TrackBar_ScrollBy(AObj: TTrackBar; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure TrackBar_SetBounds(AObj: TTrackBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure TrackBar_SetFocus(AObj: TTrackBar); stdcall;
begin
  AObj.SetFocus;
end;

procedure TrackBar_Update(AObj: TTrackBar); stdcall;
begin
  AObj.Update;
end;

procedure TrackBar_UpdateControlState(AObj: TTrackBar); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure TrackBar_BringToFront(AObj: TTrackBar); stdcall;
begin
  AObj.BringToFront;
end;

procedure TrackBar_ClientToScreen(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure TrackBar_ClientToParent(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function TrackBar_Dragging(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function TrackBar_HasParent(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure TrackBar_Hide(AObj: TTrackBar); stdcall;
begin
  AObj.Hide;
end;

function TrackBar_Perform(AObj: TTrackBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure TrackBar_Refresh(AObj: TTrackBar); stdcall;
begin
  AObj.Refresh;
end;

procedure TrackBar_ScreenToClient(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure TrackBar_ParentToClient(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure TrackBar_SendToBack(AObj: TTrackBar); stdcall;
begin
  AObj.SendToBack;
end;

procedure TrackBar_Show(AObj: TTrackBar); stdcall;
begin
  AObj.Show;
end;

function TrackBar_GetTextBuf(AObj: TTrackBar; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function TrackBar_GetTextLen(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure TrackBar_SetTextBuf(AObj: TTrackBar; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function TrackBar_FindComponent(AObj: TTrackBar; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function TrackBar_GetNamePath(AObj: TTrackBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure TrackBar_Assign(AObj: TTrackBar; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure TrackBar_DisposeOf(AObj: TTrackBar); stdcall;
begin
  AObj.DisposeOf;
end;

function TrackBar_ClassType(AObj: TTrackBar): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function TrackBar_ClassName(AObj: TTrackBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function TrackBar_InstanceSize(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function TrackBar_InheritsFrom(AObj: TTrackBar; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function TrackBar_Equals(AObj: TTrackBar; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function TrackBar_GetHashCode(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function TrackBar_ToString(AObj: TTrackBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function TrackBar_GetAlign(AObj: TTrackBar): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure TrackBar_SetAlign(AObj: TTrackBar; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function TrackBar_GetAnchors(AObj: TTrackBar): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure TrackBar_SetAnchors(AObj: TTrackBar; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function TrackBar_GetBorderWidth(AObj: TTrackBar): TBorderWidth; stdcall;
begin
  Result :=  AObj.BorderWidth;
end;

procedure TrackBar_SetBorderWidth(AObj: TTrackBar; AValue: TBorderWidth); stdcall;
begin
  AObj.BorderWidth := AValue;
end;

function TrackBar_GetDoubleBuffered(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure TrackBar_SetDoubleBuffered(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function TrackBar_GetDragCursor(AObj: TTrackBar): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure TrackBar_SetDragCursor(AObj: TTrackBar; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function TrackBar_GetDragKind(AObj: TTrackBar): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure TrackBar_SetDragKind(AObj: TTrackBar; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function TrackBar_GetDragMode(AObj: TTrackBar): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure TrackBar_SetDragMode(AObj: TTrackBar; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function TrackBar_GetEnabled(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure TrackBar_SetEnabled(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function TrackBar_GetLineSize(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.LineSize;
end;

procedure TrackBar_SetLineSize(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.LineSize := AValue;
end;

function TrackBar_GetMax(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Max;
end;

procedure TrackBar_SetMax(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Max := AValue;
end;

function TrackBar_GetMin(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Min;
end;

procedure TrackBar_SetMin(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Min := AValue;
end;

function TrackBar_GetOrientation(AObj: TTrackBar): TTrackBarOrientation; stdcall;
begin
  Result :=  AObj.Orientation;
end;

procedure TrackBar_SetOrientation(AObj: TTrackBar; AValue: TTrackBarOrientation); stdcall;
begin
  AObj.Orientation := AValue;
end;

function TrackBar_GetParentCtl3D(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure TrackBar_SetParentCtl3D(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.ParentCtl3D := AValue;
end;

function TrackBar_GetParentDoubleBuffered(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure TrackBar_SetParentDoubleBuffered(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function TrackBar_GetParentShowHint(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure TrackBar_SetParentShowHint(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function TrackBar_GetPageSize(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.PageSize;
end;

procedure TrackBar_SetPageSize(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.PageSize := AValue;
end;

function TrackBar_GetPopupMenu(AObj: TTrackBar): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure TrackBar_SetPopupMenu(AObj: TTrackBar; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function TrackBar_GetFrequency(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Frequency;
end;

procedure TrackBar_SetFrequency(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Frequency := AValue;
end;

function TrackBar_GetPosition(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Position;
end;

procedure TrackBar_SetPosition(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Position := AValue;
end;

function TrackBar_GetPositionToolTip(AObj: TTrackBar): TPositionToolTip; stdcall;
begin
  Result :=  AObj.PositionToolTip;
end;

procedure TrackBar_SetPositionToolTip(AObj: TTrackBar; AValue: TPositionToolTip); stdcall;
begin
  AObj.PositionToolTip := AValue;
end;

function TrackBar_GetSliderVisible(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.SliderVisible;
end;

procedure TrackBar_SetSliderVisible(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.SliderVisible := AValue;
end;

function TrackBar_GetSelEnd(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.SelEnd;
end;

procedure TrackBar_SetSelEnd(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.SelEnd := AValue;
end;

function TrackBar_GetSelStart(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.SelStart;
end;

procedure TrackBar_SetSelStart(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.SelStart := AValue;
end;

function TrackBar_GetShowHint(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure TrackBar_SetShowHint(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function TrackBar_GetShowSelRange(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.ShowSelRange;
end;

procedure TrackBar_SetShowSelRange(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.ShowSelRange := AValue;
end;

function TrackBar_GetTabOrder(AObj: TTrackBar): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure TrackBar_SetTabOrder(AObj: TTrackBar; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function TrackBar_GetTabStop(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure TrackBar_SetTabStop(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function TrackBar_GetThumbLength(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ThumbLength;
end;

procedure TrackBar_SetThumbLength(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.ThumbLength := AValue;
end;

function TrackBar_GetTickMarks(AObj: TTrackBar): TTickMark; stdcall;
begin
  Result :=  AObj.TickMarks;
end;

procedure TrackBar_SetTickMarks(AObj: TTrackBar; AValue: TTickMark); stdcall;
begin
  AObj.TickMarks := AValue;
end;

function TrackBar_GetTickStyle(AObj: TTrackBar): TTickStyle; stdcall;
begin
  Result :=  AObj.TickStyle;
end;

procedure TrackBar_SetTickStyle(AObj: TTrackBar; AValue: TTickStyle); stdcall;
begin
  AObj.TickStyle := AValue;
end;

function TrackBar_GetVisible(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure TrackBar_SetVisible(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function TrackBar_GetStyleElements(AObj: TTrackBar): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure TrackBar_SetStyleElements(AObj: TTrackBar; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure TrackBar_SetOnContextPopup(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, geContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, geContextPopup, AEventId);
end;

procedure TrackBar_SetOnChange(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;

procedure TrackBar_SetOnDragDrop(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, geDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, geDragDrop, AEventId);
end;

procedure TrackBar_SetOnDragOver(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, geDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, geDragOver, AEventId);
end;

procedure TrackBar_SetOnEndDock(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, geEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, geEndDock, AEventId);
end;

procedure TrackBar_SetOnEndDrag(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, geEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, geEndDrag, AEventId);
end;

procedure TrackBar_SetOnEnter(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, geEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, geEnter, AEventId);
end;

procedure TrackBar_SetOnExit(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, geExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, geExit, AEventId);
end;

procedure TrackBar_SetOnGesture(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, geGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, geGesture, AEventId);
end;

procedure TrackBar_SetOnKeyDown(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, geKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, geKeyDown, AEventId);
end;

procedure TrackBar_SetOnKeyPress(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, geKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, geKeyPress, AEventId);
end;

procedure TrackBar_SetOnKeyUp(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, geKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, geKeyUp, AEventId);
end;

procedure TrackBar_SetOnStartDock(AObj: TTrackBar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, geStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, geStartDock, AEventId);
end;

function TrackBar_GetDockClientCount(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function TrackBar_GetDockSite(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure TrackBar_SetDockSite(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function TrackBar_GetAlignDisabled(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function TrackBar_GetMouseInClient(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function TrackBar_GetVisibleDockClientCount(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function TrackBar_GetBrush(AObj: TTrackBar): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function TrackBar_GetControlCount(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function TrackBar_GetHandle(AObj: TTrackBar): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function TrackBar_GetParentWindow(AObj: TTrackBar): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure TrackBar_SetParentWindow(AObj: TTrackBar; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function TrackBar_GetUseDockManager(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure TrackBar_SetUseDockManager(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

function TrackBar_GetAction(AObj: TTrackBar): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure TrackBar_SetAction(AObj: TTrackBar; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function TrackBar_GetBiDiMode(AObj: TTrackBar): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure TrackBar_SetBiDiMode(AObj: TTrackBar; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

procedure TrackBar_GetBoundsRect(AObj: TTrackBar; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure TrackBar_SetBoundsRect(AObj: TTrackBar; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function TrackBar_GetClientHeight(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure TrackBar_SetClientHeight(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure TrackBar_GetClientOrigin(AObj: TTrackBar; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure TrackBar_GetClientRect(AObj: TTrackBar; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function TrackBar_GetClientWidth(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure TrackBar_SetClientWidth(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function TrackBar_GetControlState(AObj: TTrackBar): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure TrackBar_SetControlState(AObj: TTrackBar; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function TrackBar_GetControlStyle(AObj: TTrackBar): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure TrackBar_SetControlStyle(AObj: TTrackBar; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function TrackBar_GetExplicitLeft(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function TrackBar_GetExplicitTop(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function TrackBar_GetExplicitWidth(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function TrackBar_GetExplicitHeight(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function TrackBar_GetFloating(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function TrackBar_GetParent(AObj: TTrackBar): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure TrackBar_SetParent(AObj: TTrackBar; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function TrackBar_GetAlignWithMargins(AObj: TTrackBar): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure TrackBar_SetAlignWithMargins(AObj: TTrackBar; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function TrackBar_GetLeft(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure TrackBar_SetLeft(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function TrackBar_GetTop(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure TrackBar_SetTop(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function TrackBar_GetWidth(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure TrackBar_SetWidth(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function TrackBar_GetHeight(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure TrackBar_SetHeight(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function TrackBar_GetCursor(AObj: TTrackBar): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure TrackBar_SetCursor(AObj: TTrackBar; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function TrackBar_GetHint(AObj: TTrackBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure TrackBar_SetHint(AObj: TTrackBar; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function TrackBar_GetMargins(AObj: TTrackBar): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure TrackBar_SetMargins(AObj: TTrackBar; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function TrackBar_GetCustomHint(AObj: TTrackBar): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure TrackBar_SetCustomHint(AObj: TTrackBar; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function TrackBar_GetComponentCount(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function TrackBar_GetComponentIndex(AObj: TTrackBar): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure TrackBar_SetComponentIndex(AObj: TTrackBar; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function TrackBar_GetOwner(AObj: TTrackBar): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function TrackBar_GetName(AObj: TTrackBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure TrackBar_SetName(AObj: TTrackBar; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function TrackBar_GetTag(AObj: TTrackBar): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure TrackBar_SetTag(AObj: TTrackBar; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function TrackBar_GetDockClients(AObj: TTrackBar; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function TrackBar_GetControls(AObj: TTrackBar; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function TrackBar_GetComponents(AObj: TTrackBar; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function TrackBar_StaticClassType: TClass; stdcall;
begin
  Result := TTrackBar;
end;

exports
  TrackBar_Create,
  TrackBar_Free,
  TrackBar_SetTick,
  TrackBar_CanFocus,
  TrackBar_ContainsControl,
  TrackBar_ControlAtPos,
  TrackBar_DisableAlign,
  TrackBar_EnableAlign,
  TrackBar_FindChildControl,
  TrackBar_FlipChildren,
  TrackBar_Focused,
  TrackBar_HandleAllocated,
  TrackBar_InsertControl,
  TrackBar_Invalidate,
  TrackBar_PaintTo,
  TrackBar_RemoveControl,
  TrackBar_Realign,
  TrackBar_Repaint,
  TrackBar_ScaleBy,
  TrackBar_ScrollBy,
  TrackBar_SetBounds,
  TrackBar_SetFocus,
  TrackBar_Update,
  TrackBar_UpdateControlState,
  TrackBar_BringToFront,
  TrackBar_ClientToScreen,
  TrackBar_ClientToParent,
  TrackBar_Dragging,
  TrackBar_HasParent,
  TrackBar_Hide,
  TrackBar_Perform,
  TrackBar_Refresh,
  TrackBar_ScreenToClient,
  TrackBar_ParentToClient,
  TrackBar_SendToBack,
  TrackBar_Show,
  TrackBar_GetTextBuf,
  TrackBar_GetTextLen,
  TrackBar_SetTextBuf,
  TrackBar_FindComponent,
  TrackBar_GetNamePath,
  TrackBar_Assign,
  TrackBar_DisposeOf,
  TrackBar_ClassType,
  TrackBar_ClassName,
  TrackBar_InstanceSize,
  TrackBar_InheritsFrom,
  TrackBar_Equals,
  TrackBar_GetHashCode,
  TrackBar_ToString,
  TrackBar_GetAlign,
  TrackBar_SetAlign,
  TrackBar_GetAnchors,
  TrackBar_SetAnchors,
  TrackBar_GetBorderWidth,
  TrackBar_SetBorderWidth,
  TrackBar_GetDoubleBuffered,
  TrackBar_SetDoubleBuffered,
  TrackBar_GetDragCursor,
  TrackBar_SetDragCursor,
  TrackBar_GetDragKind,
  TrackBar_SetDragKind,
  TrackBar_GetDragMode,
  TrackBar_SetDragMode,
  TrackBar_GetEnabled,
  TrackBar_SetEnabled,
  TrackBar_GetLineSize,
  TrackBar_SetLineSize,
  TrackBar_GetMax,
  TrackBar_SetMax,
  TrackBar_GetMin,
  TrackBar_SetMin,
  TrackBar_GetOrientation,
  TrackBar_SetOrientation,
  TrackBar_GetParentCtl3D,
  TrackBar_SetParentCtl3D,
  TrackBar_GetParentDoubleBuffered,
  TrackBar_SetParentDoubleBuffered,
  TrackBar_GetParentShowHint,
  TrackBar_SetParentShowHint,
  TrackBar_GetPageSize,
  TrackBar_SetPageSize,
  TrackBar_GetPopupMenu,
  TrackBar_SetPopupMenu,
  TrackBar_GetFrequency,
  TrackBar_SetFrequency,
  TrackBar_GetPosition,
  TrackBar_SetPosition,
  TrackBar_GetPositionToolTip,
  TrackBar_SetPositionToolTip,
  TrackBar_GetSliderVisible,
  TrackBar_SetSliderVisible,
  TrackBar_GetSelEnd,
  TrackBar_SetSelEnd,
  TrackBar_GetSelStart,
  TrackBar_SetSelStart,
  TrackBar_GetShowHint,
  TrackBar_SetShowHint,
  TrackBar_GetShowSelRange,
  TrackBar_SetShowSelRange,
  TrackBar_GetTabOrder,
  TrackBar_SetTabOrder,
  TrackBar_GetTabStop,
  TrackBar_SetTabStop,
  TrackBar_GetThumbLength,
  TrackBar_SetThumbLength,
  TrackBar_GetTickMarks,
  TrackBar_SetTickMarks,
  TrackBar_GetTickStyle,
  TrackBar_SetTickStyle,
  TrackBar_GetVisible,
  TrackBar_SetVisible,
  TrackBar_GetStyleElements,
  TrackBar_SetStyleElements,
  TrackBar_SetOnContextPopup,
  TrackBar_SetOnChange,
  TrackBar_SetOnDragDrop,
  TrackBar_SetOnDragOver,
  TrackBar_SetOnEndDock,
  TrackBar_SetOnEndDrag,
  TrackBar_SetOnEnter,
  TrackBar_SetOnExit,
  TrackBar_SetOnGesture,
  TrackBar_SetOnKeyDown,
  TrackBar_SetOnKeyPress,
  TrackBar_SetOnKeyUp,
  TrackBar_SetOnStartDock,
  TrackBar_GetDockClientCount,
  TrackBar_GetDockSite,
  TrackBar_SetDockSite,
  TrackBar_GetAlignDisabled,
  TrackBar_GetMouseInClient,
  TrackBar_GetVisibleDockClientCount,
  TrackBar_GetBrush,
  TrackBar_GetControlCount,
  TrackBar_GetHandle,
  TrackBar_GetParentWindow,
  TrackBar_SetParentWindow,
  TrackBar_GetUseDockManager,
  TrackBar_SetUseDockManager,
  TrackBar_GetAction,
  TrackBar_SetAction,
  TrackBar_GetBiDiMode,
  TrackBar_SetBiDiMode,
  TrackBar_GetBoundsRect,
  TrackBar_SetBoundsRect,
  TrackBar_GetClientHeight,
  TrackBar_SetClientHeight,
  TrackBar_GetClientOrigin,
  TrackBar_GetClientRect,
  TrackBar_GetClientWidth,
  TrackBar_SetClientWidth,
  TrackBar_GetControlState,
  TrackBar_SetControlState,
  TrackBar_GetControlStyle,
  TrackBar_SetControlStyle,
  TrackBar_GetExplicitLeft,
  TrackBar_GetExplicitTop,
  TrackBar_GetExplicitWidth,
  TrackBar_GetExplicitHeight,
  TrackBar_GetFloating,
  TrackBar_GetParent,
  TrackBar_SetParent,
  TrackBar_GetAlignWithMargins,
  TrackBar_SetAlignWithMargins,
  TrackBar_GetLeft,
  TrackBar_SetLeft,
  TrackBar_GetTop,
  TrackBar_SetTop,
  TrackBar_GetWidth,
  TrackBar_SetWidth,
  TrackBar_GetHeight,
  TrackBar_SetHeight,
  TrackBar_GetCursor,
  TrackBar_SetCursor,
  TrackBar_GetHint,
  TrackBar_SetHint,
  TrackBar_GetMargins,
  TrackBar_SetMargins,
  TrackBar_GetCustomHint,
  TrackBar_SetCustomHint,
  TrackBar_GetComponentCount,
  TrackBar_GetComponentIndex,
  TrackBar_SetComponentIndex,
  TrackBar_GetOwner,
  TrackBar_GetName,
  TrackBar_SetName,
  TrackBar_GetTag,
  TrackBar_SetTag,
  TrackBar_GetDockClients,
  TrackBar_GetControls,
  TrackBar_GetComponents,
  TrackBar_StaticClassType;

