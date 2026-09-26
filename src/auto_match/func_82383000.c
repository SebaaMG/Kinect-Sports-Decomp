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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_1c;


undefined4 * fn_82383000(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  piVar3 = *(int **)(*(int *)(param_2 + 0x80) + 0x184);
  while( true ) {
    if (piVar3 == *(int **)(*(int *)(param_2 + 0x80) + 0x188)) {
      return param_1;
    }
    if (*(int *)(*piVar3 + 0xd4) == 0) break;
    piVar3 = piVar3 + 2;
  }
  puVar2 = (undefined4 *)fn_82365BD8(auStack_20);
  uVar1 = puVar2[1];
  puVar2[1] = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *puVar2;
  *puVar2 = *param_1;
  *param_1 = uVar1;
  if (iStack_1c == 0) {
    return param_1;
  }
  fn_822315A0();
  return param_1;
}

