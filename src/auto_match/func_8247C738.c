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
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();


void fn_8247C738(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  if (*(char *)(iVar2 + 0x48) != '\0') {
    fn_827EF828((double)*(float *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x1c));
    fn_827EFFE8(*(undefined4 *)(iVar2 + 0x1c));
    fn_827F0180(*(undefined4 *)(iVar2 + 0x1c),
                      **(undefined4 **)((iVar1 + 0x20) * 4 + *(int *)(iVar2 + 0x14)),1,0,0);
  }
  return;
}

