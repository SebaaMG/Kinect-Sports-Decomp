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
extern int fn_827C1AC8();
extern int fn_827C9ED8();


void fn_827CA008(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x18c) = puVar3;
  puVar3[2] = 0;
  *puVar3 = fn_827C9ED8;
  puVar3[3] = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    puVar3[4] = uVar4;
    if (param_2 == '\0') {
      uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                        (param_1,1,
                         (longlong)*(int *)(param_1 + 100) * (longlong)*(int *)(param_1 + 0x5c),
                         uVar4);
      puVar3[3] = uVar4;
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
      uVar2 = fn_827C1AC8(*(undefined4 *)(param_1 + 0x60),uVar4);
      uVar4 = (**(code **)(iVar1 + 0x10))
                        (param_1,1,0,
                         (longlong)*(int *)(param_1 + 100) * (longlong)*(int *)(param_1 + 0x5c),
                         uVar2,uVar4);
      puVar3[2] = uVar4;
    }
  }
  return;
}

