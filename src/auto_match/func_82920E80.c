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
extern int fn_8265C940();
extern int fn_8265C990();


undefined8 fn_82920E80(int *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar4 = *param_1;
  iVar1 = param_1[1];
  if ((((*(int *)(iVar1 + 0x68) == *(int *)(iVar4 + 0x68)) &&
       (*(int *)(iVar1 + 0x6c) == *(int *)(iVar4 + 0x6c))) &&
      (*(int *)(iVar1 + 0x70) == *(int *)(iVar4 + 0x70))) &&
     (lVar2 = fn_8265C940(*(int *)(iVar1 + 0x68) << 4,0x24810000), lVar2 != 0)) {
    if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
      *(undefined4 *)(param_1[1] + 0x10) = 0;
      *(undefined4 *)(*param_1 + 0x10) = 0;
    }
    iVar4 = param_1[1];
    uVar5 = 0;
    if (*(int *)(iVar4 + 0x70) != 0) {
      uVar3 = (ulonglong)*(uint *)(iVar4 + 0x6c);
      do {
        uVar6 = 0;
        if (uVar3 != 0) {
          do {
            (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,uVar6,uVar5,lVar2);
            (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],uVar6,uVar5,lVar2);
            iVar4 = param_1[1];
            uVar6 = uVar6 + 1;
            uVar3 = (ulonglong)*(uint *)(iVar4 + 0x6c);
          } while ((uVar6 & 0xffffffff) < uVar3);
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 0x70));
    }
    fn_8265C990(lVar2,0x24810000);
    return 0;
  }
  return 0xffffffff80004005;
}

