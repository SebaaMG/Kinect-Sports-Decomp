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
extern unsigned int lbl_827CD910;


void fn_827CD968(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x50] = (int)puVar2;
  *puVar2 = &lbl_827CD910;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (param_2 == '\0') {
      iVar4 = 0;
      if (0 < param_1[0xf]) {
        piVar5 = (int *)(param_1[0x11] + -0x48);
        puVar2 = puVar2 + 5;
        do {
          piVar1 = piVar5 + 0x19;
          piVar5 = piVar5 + 0x15;
          uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,*piVar1 << 3,*piVar5 << 3);
          puVar2 = puVar2 + 1;
          *puVar2 = uVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[0xf]);
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}

