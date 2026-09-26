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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
#define _uStack_58 ((*(U64*)&uStack_58))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int iStack_54;
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_56;
extern unsigned int uStack_58;


ulonglong fn_82A33500(undefined4 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 auStack_60 [2];
  ushort uStack_58;
  undefined2 uStack_56;
  int iStack_54;
  ushort uStack_50;
  ushort uStack_4e;
  char *pcStack_4c;
  uint auStack_48 [2];
  undefined4 uStack_40;
  ushort *puStack_3c;
  undefined4 uStack_38;
  
  uStack_40 = *param_1;
  uStack_38 = param_1[2];
  puStack_3c = &uStack_58;
  auStack_60[0] = 0;
  uStack_58 = (ushort)((ulonglong)*(undefined8 *)param_1[1] >> 0x30);
  uVar2 = (uint)uStack_58;
  iStack_54 = (int)*(undefined8 *)param_1[1];
  uVar3 = uVar2;
  if (uVar2 != 0) {
    do {
      if (*(char *)(iStack_54 + -1 + uVar3) == '\\') break;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uStack_4e = (ushort)(uVar2 - uVar3);
  uVar2 = uVar2 - uVar3 & 0xffff;
  pcStack_4c = (char *)(iStack_54 + uVar3);
  _uStack_58 = CONCAT26((short)uVar3,CONCAT24((short)uVar3,iStack_54));
  if (((uVar3 & 0xffff) == 0) || (uVar2 == 0)) {
    uVar1 = 0xffffffffc000000d;
  }
  else {
    uStack_50 = uStack_4e;
    if (((uVar2 == 3) && (*pcStack_4c == '*')) && (pcStack_4c[1] == '.')) {
      uStack_50 = -(ushort)(pcStack_4c[2] != '*') & uStack_4e;
    }
    uVar1 = NtOpenFile(auStack_60,0x100001,&uStack_40,auStack_48,3,0x4021);
    if (-1 < (int)uVar1) {
      uVar1 = (**(code **)(lbl_8315D3D0 + 0x18))
                        (auStack_60[0],0,0,0,auStack_48,param_2,param_3,&uStack_50);
      if ((longlong)uVar1 < 0) {
        NtClose(auStack_60[0]);
      }
      else {
        if (param_4 == (undefined4 *)0x0) {
          NtClose(auStack_60[0]);
        }
        else {
          *param_4 = auStack_60[0];
        }
        uVar1 = (ulonglong)auStack_48[0];
      }
    }
  }
  return uVar1;
}

