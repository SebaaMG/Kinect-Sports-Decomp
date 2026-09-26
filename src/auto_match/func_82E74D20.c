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
extern unsigned int *auStack_30;
extern int fn_82E5A140();
extern int fn_82E5A150();
extern int fn_82E5A190();
extern int fn_82E5A1C0();
extern int fn_82E5A1F0();
extern int fn_82EEAF80();


longlong fn_82E74D20(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint auStack_30 [12];
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = fn_82E5A140(param_2,*(longlong *)(param_1 + 2) + *(longlong *)(param_1 + 0xc));
    if (-1 < lVar1) {
      lVar4 = *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0xe) +
              *(longlong *)(param_1 + 2);
      lVar1 = fn_82E5A150(param_2,lVar4);
      if ((-1 < lVar1) && (lVar1 = fn_82E5A1C0(param_2,param_1[0x16]), -1 < lVar1)) {
        iVar2 = (**(code **)(*param_1 + 0x24))(param_1);
        if ((iVar2 == 0) && (uVar3 = *(ulonglong *)(param_1 + 0x12), uVar3 != 0)) {
          trapDoubleWordImmediate(6,uVar3,0);
          lVar1 = fn_82E5A1F0(param_2,(ulonglong)
                                          ((lVar4 - *(longlong *)(param_1 + 0xc)) * 10000) / uVar3);
          if (lVar1 < 0) {
            return lVar1;
          }
        }
        if (param_1[0x17] != 0) {
          auStack_30[0] = 0;
          lVar1 = fn_82EEAF80(param_1[0x17],auStack_30);
          if (-1 < lVar1) {
            lVar1 = fn_82E5A190(param_2,(ulonglong)(uint)param_1[6] + (ulonglong)auStack_30[0]);
          }
        }
      }
    }
  }
  return lVar1;
}

