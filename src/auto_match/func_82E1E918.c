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
extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_8265CA20();
extern int fn_829E53B0();
extern int fn_82A1E108();
extern int fn_82A1E810();
extern int fn_82A1F2F8();
extern int fn_82E1E6E0();
extern int fn_82E21B50();


undefined8 fn_82E1E918(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_30 [48];
  
  cVar1 = *(char *)(param_1 + 0x15);
  while (cVar1 == '\0') {
    fn_82A1E108(0xfa);
    while ((*(int *)(param_1 + 0x18) != 0 && (*(char *)(param_1 + 0x15) == '\0'))) {
      fn_8251C390(auStack_30,0xffffffff8214ba04,0x30b);
      fn_82E1E6E0(param_1,(*(undefined4 **)(param_1 + 0x18))[1],**(undefined4 **)(param_1 + 0x18))
      ;
      while (*(char *)(param_1 + 0x14) != '\0') {
        fn_82A1F2F8();
        fn_82A1E108(0x19);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 8);
      if (iVar2 != 0) {
        fn_82E21B50(iVar2);
        fn_8265CA20(iVar2);
      }
      fn_829E53B0(auStack_30);
    }
    fn_82A1E810(*(undefined4 *)(param_1 + 0x3c));
    cVar1 = *(char *)(param_1 + 0x15);
  }
  return 0;
}

