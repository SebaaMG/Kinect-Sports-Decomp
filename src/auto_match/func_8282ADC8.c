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
extern unsigned int *auStack_28;
extern int fn_82820EF8();
extern int fn_82826568();
extern int fn_828295A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8282ADC8(undefined8 param_1,int param_2)

{
  longlong lVar1;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_82826568(param_1,*(int *)(param_2 + 0x14),&uStack_2c);
    fn_82826568(param_1,*(undefined4 *)(param_2 + 0x18),auStack_28);
    fn_828295A8(uStack_2c,&uStack_30);
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x1c) + (ulonglong)uStack_30;
    *(int *)(param_2 + 0x10) = (int)lVar1;
    fn_82820EF8(lVar1,4);
    *(undefined4 *)(param_2 + 0x20) = **(undefined4 **)(param_2 + 0x10);
    fn_828295A8(auStack_28[0],&uStack_30);
    **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + uStack_30;
  }
  return;
}

