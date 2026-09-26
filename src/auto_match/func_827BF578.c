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
extern int fn_827C1968();


void fn_827BF578(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  
  iVar1 = param_1[5];
  if ((iVar1 != 0x65) && (iVar1 != 0x66)) {
    if (iVar1 == 0x67) goto LAB_827bf6b8;
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    pcVar2 = *(code **)*param_1;
    while( true ) {
      (*pcVar2)(param_1);
LAB_827bf6b8:
      if (*(char *)(param_1[0x4f] + 0xd) != '\0') break;
      (**(code **)param_1[0x4f])(param_1);
      uVar4 = 0;
      if (param_1[0x38] != 0) {
        do {
          if (param_1[2] != 0) {
            *(uint *)(param_1[2] + 4) = uVar4;
            *(int *)(param_1[2] + 8) = param_1[0x38];
            (**(code **)param_1[2])(param_1);
          }
          cVar3 = (**(code **)(param_1[0x52] + 4))(param_1,0);
          if (cVar3 == '\0') {
            *(undefined4 *)(*param_1 + 0x14) = 0x18;
            (**(code **)*param_1)(param_1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)param_1[0x38]);
      }
LAB_827bf6a4:
      pcVar2 = *(code **)(param_1[0x4f] + 8);
    }
    (**(code **)(param_1[0x53] + 0xc))();
    (**(code **)(param_1[6] + 0x10))(param_1);
    fn_827C1968(param_1);
    return;
  }
  if ((uint)param_1[8] <= (uint)param_1[0x34]) goto LAB_827bf6a4;
  *(undefined4 *)(*param_1 + 0x14) = 0x43;
  (**(code **)*param_1)(param_1);
  goto LAB_827bf6a4;
}

