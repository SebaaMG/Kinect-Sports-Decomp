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
extern int fn_825089A0();
extern int fn_8289B1F8();


undefined4 * fn_8289BD20(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_825089A0();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x24))(piVar1,0x20,1);
  *puVar2 = *(undefined4 *)(param_1 + 4);
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  fn_8289B1F8(param_1 + 0xd,puVar2 + 3,param_2);
  return puVar2;
}

