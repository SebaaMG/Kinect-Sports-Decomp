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
extern int fn_829C2180();


undefined8 fn_829B87C8(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 == (uint *)0x0)) {
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    fn_829C2180(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}

