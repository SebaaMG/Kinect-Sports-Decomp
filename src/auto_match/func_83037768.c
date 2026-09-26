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
extern int fn_82A2A700();
extern int fn_82F65320();
extern int fn_82F6E380();
extern int fn_82FEBFF8();
extern int fn_83009F28();
extern int fn_83009FC0();
extern int fn_830131C8();
extern unsigned int iStack_40;
extern unsigned int lbl_832642E4;


undefined8 fn_83037768(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iStack_40;
  int aiStack_3c [15];
  
  uVar1 = fn_82F6E380(0);
  fn_82F65320(uVar1);
  fn_82FEBFF8();
  uVar3 = 0x102;
  do {
    if (uVar3 < 3) {
      if (uVar3 == 0) {
        iStack_40 = 0;
        aiStack_3c[0] = 0;
        iVar2 = XNotifyGetNext(*(undefined4 *)(param_1 + 4),0xa000003,&iStack_40,aiStack_3c);
        if (iVar2 != 0) {
          if (iStack_40 == 0xa000003 && aiStack_3c[0] != 0) {
            fn_83009FC0();
          }
          else {
            fn_83009F28();
          }
        }
      }
      else {
LAB_83037824:
        fn_830131C8(lbl_832642E4);
      }
    }
    else if (uVar3 == 0x102) goto LAB_83037824;
    uVar3 = fn_82A2A700(3,(undefined4 *)(param_1 + 4),0,0xffffffffffffffff);
    if (*(char *)(param_1 + 0x10) != '\0') {
      return 0;
    }
  } while( true );
}

