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
extern int fn_82F35400();
extern unsigned int uStack_70;


undefined8 fn_82F36668(int *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *apuStack_58 [2];
  longlong lStack_50;
  longlong alStack_48 [9];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    lStack_50 = 0;
    uVar2 = (**(code **)(*param_1 + 0x14))(param_1,&lStack_50,0);
    if (-1 < (int)uVar2) {
      uVar1 = param_1[0x31];
      uVar4 = 0;
      if (uVar1 != 0) {
        param_1 = param_1 + 0x17;
        do {
          fn_82F35400(param_1,uVar4,&piStack_6c);
          if (*piStack_6c == param_2) {
            *param_3 = lStack_50;
            return 0;
          }
          fn_82F35400(param_1,uVar4,&piStack_68);
          if (*piStack_68 != 0) {
            uStack_70 = 0;
            fn_82F35400(param_1,uVar4,&puStack_64);
            (**(code **)(*(int *)*puStack_64 + 0x10))((int *)*puStack_64,&uStack_70);
            fn_82F35400(param_1,uVar4,&puStack_60);
            (**(code **)(*(int *)*puStack_60 + 0xc))((int *)*puStack_60,uStack_70 | 1);
            fn_82F35400(param_1,uVar4,&puStack_5c);
            iVar3 = (**(code **)(*(int *)*puStack_5c + 0x18))((int *)*puStack_5c,alStack_48);
            if (-1 < iVar3) {
              lStack_50 = alStack_48[0] + lStack_50;
            }
            fn_82F35400(param_1,uVar4,apuStack_58);
            (**(code **)(*(int *)*apuStack_58[0] + 0xc))((int *)*apuStack_58[0],uStack_70);
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar1);
      }
      uVar2 = 0xffffffffc00d3a9c;
    }
  }
  return uVar2;
}

