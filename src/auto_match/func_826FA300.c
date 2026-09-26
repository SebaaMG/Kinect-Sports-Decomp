typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_5c;
extern unsigned int *auStack_7c;
extern int fn_8267C498();
extern int fn_826C6248();
extern int fn_826C8C70();
extern int fn_826E7408();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E7B08();
extern int fn_826E8AF0();
extern int fn_826E8C68();
extern int fn_826E92E8();
extern int fn_826E9330();
extern unsigned int iStack_80;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_826FA300(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar7;
  int iVar6;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  int iStack_80;
  undefined1 auStack_7c [32];
  undefined1 auStack_5c [28];
  uint uStack_40;
  uint uStack_3c;
  
  lVar10 = ((ulonglong)*(uint *)(param_1 + 0x2c) - (ulonglong)*(uint *)(param_1 + 0x30)) +
           (ulonglong)*(uint *)(param_1 + 0x34);
  lVar5 = fn_826E7408();
  cVar7 = fn_826E7438(param_1);
  if (cVar7 != '\0') {
    fn_826C6248(&iStack_80);
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    iVar9 = *(int *)(param_1 + 0x2c) + 2;
    puVar8 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[1];
    uVar2 = *puVar8;
    *(int *)(param_1 + 0x2c) = iVar9;
    *(undefined1 *)(param_1 + 0x15) = 0;
    uStack_3c = (uint)CONCAT11(uVar1,uVar2);
    if (*(int *)(param_1 + 0x30) - iVar9 < 2) {
      fn_826E7800(param_1,2);
    }
    puVar8 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[1];
    uVar2 = *puVar8;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_40 = (uint)CONCAT11(uVar1,uVar2);
    fn_826E8AF0(param_1,auStack_5c);
    fn_826C8C70(param_1,0xffffffff8200dc5c,uStack_3c & 0xffff,uStack_40);
    fn_826E9330(param_1,auStack_5c);
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x34);
    iVar6 = fn_826E7408(param_1);
    if ((iVar9 - iVar3) + iVar4 < iVar6) {
      fn_826E8C68(param_1,auStack_7c);
      fn_826C8C70(param_1,0xffffffff8200dc50);
      fn_826E92E8(param_1,auStack_7c);
    }
    fn_826E7B08(param_1,lVar10);
    if (iStack_80 != 0) {
      fn_8267C498();
    }
  }
  return lVar5 - lVar10;
}

