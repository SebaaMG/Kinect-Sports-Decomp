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
extern int fn_82635A30();
extern int fn_82635A38();
extern int fn_8293BBD8();
extern int fn_82BD8FD0();


undefined4 fn_8293C408(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    fn_8293BBD8();
    fn_82635A30(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x60));
  }
  if (param_2 == 0) goto LAB_8293c4b0;
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 1;
    fn_82635A38(*(undefined4 *)(param_1 + 0x138),*(uint *)(param_1 + 0x60) & 0xf8);
    iVar1 = *(int *)(param_1 + 0x13c);
    if (iVar1 == 0) goto LAB_8293c4b0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 2) goto LAB_8293c4b0;
    *(undefined4 *)(param_1 + 0x58) = 3;
    fn_82635A38(*(undefined4 *)(param_1 + 0x138),
                    (ulonglong)*(uint *)(param_1 + 0x60) & 0xf8 | 0x100000001);
    iVar1 = *(int *)(param_1 + 0x13c);
    if (iVar1 == 0) goto LAB_8293c4b0;
    uVar2 = 1;
  }
  fn_82BD8FD0(iVar1,uVar2);
LAB_8293c4b0:
  return *(undefined4 *)(param_1 + 0x138);
}

