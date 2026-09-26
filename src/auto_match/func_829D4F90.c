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
extern int fn_8265C990();
extern int fn_829DBB38();
extern int fn_829DFC38();
extern int fn_829E0300();
extern int fn_82A1E658();
extern int fn_82A27148();
extern unsigned int lbl_832179FC;


void fn_829D4F90(void)

{
  fn_829DBB38();
  if (lbl_832179FC != 0) {
    if (*(int *)(lbl_832179FC + 0x8f4c4) != 0) {
      ObDereferenceObject(*(undefined4 *)(lbl_832179FC + 0x8f4c4));
      *(undefined4 *)(lbl_832179FC + 0x8f4c4) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4c8) != 0) {
      ObDereferenceObject(*(undefined4 *)(lbl_832179FC + 0x8f4c8));
      *(undefined4 *)(lbl_832179FC + 0x8f4c8) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4b8) != 0) {
      fn_82A1E658(*(undefined4 *)(lbl_832179FC + 0x8f4b8));
      *(undefined4 *)(lbl_832179FC + 0x8f4b8) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4bc) != 0) {
      fn_82A1E658(*(undefined4 *)(lbl_832179FC + 0x8f4bc));
      *(undefined4 *)(lbl_832179FC + 0x8f4bc) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4c0) != 0) {
      fn_82A1E658(*(int *)(lbl_832179FC + 0x8f4c0));
      *(undefined4 *)(lbl_832179FC + 0x8f4c0) = 0;
    }
    fn_829DFC38();
    fn_829E0300(lbl_832179FC + 0x8fd08);
    if (*(int *)(lbl_832179FC + 0x8f4cc) != 0) {
      fn_82A27148(*(int *)(lbl_832179FC + 0x8f4cc));
    }
    if (*(int *)(lbl_832179FC + 0x8f4d0) != 0) {
      fn_8265C990(*(undefined4 *)(lbl_832179FC + 0x8f4d0),0x209d0000);
      *(undefined4 *)(lbl_832179FC + 0x8f4d0) = 0;
    }
    if (lbl_832179FC != 0) {
      fn_8265C990(lbl_832179FC,0x209d0000);
      lbl_832179FC = 0;
    }
  }
  return;
}

