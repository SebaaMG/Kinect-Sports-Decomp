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
extern unsigned int *auStack_2c;
extern int fn_82FF4A38();
extern int fn_83014400();
extern int fn_830149A0();
extern unsigned int lbl_83264304;
extern unsigned int uStack_30;


undefined8 fn_83014BF8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  if (((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x38) == 2)) &&
     (*(int *)(param_1 + 0x78) == 0)) {
    uStack_30 = 0;
    *(undefined4 *)(param_1 + 0x38) = 1;
    while( true ) {
      auStack_2c[0] = 0;
      uVar1 = fn_83014400(param_1,&uStack_30,auStack_2c);
      if (((uVar1 & 0xffffffff) == 0) ||
         (iVar2 = fn_830149A0(param_1,uVar1,uStack_30), iVar2 == 1)) break;
      fn_82FF4A38(lbl_83264304,*(undefined4 *)(param_1 + 0x50),uVar1,auStack_2c[0]);
    }
  }
  return 1;
}

