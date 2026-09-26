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
extern unsigned int lbl_8218E3E8;


undefined8
fn_825D3378(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,int param_9)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_stack_00000054;
  
  pbVar5 = (byte *)(param_2 + 2);
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *param_2) {
    do {
      if (pbVar5 == (byte *)0x0) {
        return uVar3;
      }
      if ((((*(uint *)(*(short *)(pbVar5 + 2) * 4 + param_9) & *(uint *)(pbVar5 + 4) & param_8) != 0
           ) && ((code *)(&lbl_8218E3E8)[(uint)*pbVar5 * 5] != (code *)0x0)) &&
         (iVar2 = (*(code *)(&lbl_8218E3E8)[(uint)*pbVar5 * 5])
                            (param_1,pbVar5,param_3,param_4,param_5,param_6,param_7,
                             in_stack_00000054), iVar2 != 0)) {
        uVar3 = 1;
      }
      pbVar1 = pbVar5 + 1;
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar5 + *pbVar1;
      if (*pbVar1 == 0) {
        pbVar5 = (byte *)0x0;
      }
    } while (iVar4 < *param_2);
  }
  return uVar3;
}

