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
extern int fn_828647C0();
extern int fn_82F63CA0();


undefined8 fn_8286D828(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar4 == *(undefined4 **)(param_1 + 8)) {
      return 0xffffffffa0370000;
    }
    piVar1 = (int *)*puVar4;
    uVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    cVar3 = fn_828647C0(uVar2,param_2);
    if (cVar3 != '\0') break;
    puVar4 = puVar4 + 1;
  }
  fn_82F63CA0(puVar4,puVar4 + 1,(*(int *)(param_1 + 8) - (int)(puVar4 + 1) >> 2) << 2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  (**(code **)(*piVar1 + 0x30))(piVar1,1);
  return 0x20370000;
}

