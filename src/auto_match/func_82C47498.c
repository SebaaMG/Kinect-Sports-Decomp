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
extern unsigned int *auStack_24;
extern int fn_82A9FA30();
extern int fn_82C7CA40();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


undefined8 fn_82C47498(int param_1)

{
  int iVar1;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  iStack_30 = *(int *)(*(int *)(param_1 + 0x50) + 0x18);
  if (iStack_30 != 0) {
    while (iStack_30 != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      fn_82A9FA30(*(undefined4 *)(iVar1 + 0x2c),0,&uStack_28,4,&uStack_2c,&iStack_30);
      *(int *)(iVar1 + 0x18) = iStack_30;
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x3cb0) == 7) {
        auStack_24[0] = uStack_28;
        fn_82C7CA40(*(int *)(iVar1 + 0x28),uStack_28,uStack_2c,auStack_24,&uStack_2c,iStack_30
                         );
      }
    }
  }
  return 0;
}

