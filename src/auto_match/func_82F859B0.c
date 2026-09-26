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
extern unsigned int *auStack_3c;
extern int fn_82A2B528();
extern int fn_82F6AB08();
extern int fn_82F70748();
extern int fn_82F7C468();
extern int fn_82F85978();
extern int fn_82F88C00();
extern unsigned int iStack_40;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


ulonglong fn_82F859B0(ulonglong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iStack_40;
  undefined1 auStack_3c [60];
  
  iVar1 = fn_82F6AB08();
  if ((param_2 == (int *)(iVar1 + 0x20)) ||
     (iVar1 = fn_82F6AB08(), param_2 == (int *)(iVar1 + 0x40))) {
    iStack_40 = (uint)(ushort)param_1 << 0x10;
    fn_82A2B528(&iStack_40);
  }
  else {
    if ((param_2[3] & 0x40U) == 0) {
      iVar1 = fn_82F7C468(param_2);
      puVar4 = &lbl_831BBF60;
      puVar3 = puVar4;
      if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
        iVar1 = fn_82F7C468(param_2);
        uVar2 = fn_82F7C468(param_2);
        puVar3 = (undefined *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
      }
      if ((puVar3[0x28] & 0xfe) != 4) {
        iVar1 = fn_82F7C468(param_2);
        puVar3 = puVar4;
        if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
          iVar1 = fn_82F7C468(param_2);
          uVar2 = fn_82F7C468(param_2);
          puVar3 = (undefined *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
        }
        if ((puVar3[0x28] & 0xfe) != 2) {
          iVar1 = fn_82F7C468(param_2);
          if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
            iVar1 = fn_82F7C468(param_2);
            uVar2 = fn_82F7C468(param_2);
            puVar4 = (undefined *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
          }
          if ((puVar4[4] & 0x80) != 0) {
            iVar1 = fn_82F85978(&iStack_40,auStack_3c,5,param_1);
            if (iVar1 == 0) {
              iVar1 = 0;
              if (iStack_40 < 1) {
                return param_1;
              }
              while( true ) {
                uVar2 = param_2[1];
                param_2[1] = (int)((ulonglong)uVar2 - 1);
                if ((longlong)((ulonglong)uVar2 - 1) < 0) {
                  uVar2 = fn_82F70748(auStack_3c[iVar1],param_2);
                }
                else {
                  *(undefined1 *)*param_2 = auStack_3c[iVar1];
                  uVar2 = (uint)*(byte *)*param_2;
                  *param_2 = (int)((byte *)*param_2 + 1);
                }
                if (uVar2 == 0xffffffff) break;
                iVar1 = iVar1 + 1;
                if (iStack_40 <= iVar1) {
                  return param_1;
                }
              }
            }
            return 0xffffffffffffffff;
          }
        }
      }
    }
    uVar2 = param_2[1];
    param_2[1] = (int)((ulonglong)uVar2 - 2);
    if ((longlong)((ulonglong)uVar2 - 2) < 0) {
      param_1 = fn_82F88C00(param_1 & 0xffff,param_2);
      param_1 = param_1 & 0xffff;
    }
    else {
      *(ushort *)*param_2 = (ushort)param_1;
      *param_2 = *param_2 + 2;
    }
  }
  return param_1;
}

