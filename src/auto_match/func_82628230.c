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
extern int fn_827D9698();
extern int fn_827DDFB8();


undefined8 fn_82628230(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  for (puVar4 = *(undefined4 **)(param_1 + 0x34); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    iVar3 = fn_827D9698(uVar2);
    if (iVar3 == *param_2) {
      fn_827DDFB8(param_3,uVar2);
    }
  }
  return 0;
}

