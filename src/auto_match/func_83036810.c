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
extern int fn_82FA5190();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_830245A0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC770;


undefined8 fn_83036810(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = 0;
  if (param_1[1] - *param_1 >> 4 != 0) {
    iVar2 = 0;
    do {
      puVar3 = (uint *)(iVar2 + *param_1);
      if (puVar3[1] != 0) {
        fn_830245A0();
        fn_83024470(puVar3[1]);
        fn_830224E8((ulonglong)puVar3[1] + 0x80);
        fn_82FA5190(lbl_831BC770,puVar3[1]);
        puVar3[1] = 0;
      }
      if (*puVar3 != 0) {
        fn_830245A0();
        fn_83024470(*puVar3);
        fn_830224E8((ulonglong)*puVar3 + 0x80);
        fn_82FA5190(lbl_831BC770,*puVar3);
        *puVar3 = 0;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < (uint)(param_1[1] - *param_1 >> 4));
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 1;
}

