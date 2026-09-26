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
extern int fn_829C4980();


longlong fn_829C4F00(ulonglong param_1,undefined8 param_2,longlong param_3,int *param_4,
                      int *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int in_stack_00000054;
  
  lVar1 = (**(code **)(in_stack_00000054 + 0x20))(*(undefined4 *)(in_stack_00000054 + 0x28),0x120,4)
  ;
  if (lVar1 == 0) {
    return -4;
  }
  lVar2 = fn_829C4980(param_3,param_1,0x101,0xffffffff82055c68,0xffffffff82055ce8,param_6,param_4,
                        param_8);
  if (lVar2 == 0) {
    if (*param_4 != 0) {
      lVar2 = fn_829C4980((param_1 & 0x3fffffff) * 4 + param_3,param_2,0,0xffffffff82055d68,
                            0xffffffff82055de0,param_7,param_5,param_8);
      if (lVar2 == 0) {
        if ((*param_5 != 0) || ((param_1 & 0xffffffff) < 0x102)) {
          (**(code **)(in_stack_00000054 + 0x24))(*(undefined4 *)(in_stack_00000054 + 0x28),lVar1);
          return 0;
        }
LAB_829c5048:
        pcVar3 = "empty distance tree with lengths";
LAB_829c5050:
        lVar2 = -3;
      }
      else {
        iVar4 = (int)lVar2;
        if (iVar4 != -3) {
          if (iVar4 != -5) {
            if (iVar4 == -4) goto LAB_829c5058;
            goto LAB_829c5048;
          }
          pcVar3 = "incomplete distance tree";
          goto LAB_829c5050;
        }
        pcVar3 = "oversubscribed distance tree";
      }
      *(char **)(in_stack_00000054 + 0x18) = pcVar3;
LAB_829c5058:
      (**(code **)(in_stack_00000054 + 0x24))(*(undefined4 *)(in_stack_00000054 + 0x28),lVar1);
      return lVar2;
    }
LAB_829c5090:
    lVar2 = -3;
    pcVar3 = "incomplete literal/length tree";
  }
  else {
    if ((int)lVar2 != -3) {
      if ((int)lVar2 == -4) goto LAB_829c50a0;
      goto LAB_829c5090;
    }
    pcVar3 = "oversubscribed literal/length tree";
  }
  *(char **)(in_stack_00000054 + 0x18) = pcVar3;
LAB_829c50a0:
  (**(code **)(in_stack_00000054 + 0x24))(*(undefined4 *)(in_stack_00000054 + 0x28),lVar1);
  return lVar2;
}

