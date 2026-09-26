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
extern int fn_82687270();
extern int fn_8275ADD0();


bool fn_8275AF88(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_4 + 0x44) != '\0') || (uVar2 = 0, *(int *)(param_4 + 0x18) != 0)) {
    uVar2 = 1;
  }
  lVar1 = fn_8275ADD0(param_2,*(undefined4 *)(param_4 + 0x38),
                        *(undefined4 *)(*(int *)(param_4 + 8) + 0x18),
                        *(undefined4 *)(*(int *)(param_4 + 8) + 0x10),
                        *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0xc),uVar2);
  if (*param_3 != 0) {
    fn_82687270(*param_3);
  }
  *param_3 = (int)lVar1;
  return lVar1 != 0;
}

