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
extern unsigned int __imp__ExThreadObjectType;
extern unsigned int *auStack_30;
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern unsigned int lbl_832179FC;


void fn_829D4EB8(void)

{
  int iVar1;
  undefined4 auStack_30 [12];
  
  if ((lbl_832179FC != 0) && (*(int *)(lbl_832179FC + 0x8f4b0) != 0)) {
    iVar1 = ObReferenceObjectByHandle
                      (*(int *)(lbl_832179FC + 0x8f4b0),__imp__ExThreadObjectType,auStack_30);
    if (-1 < iVar1) {
      KeSetBasePriorityThread(auStack_30[0],0x11);
      ObDereferenceObject(auStack_30[0]);
    }
    iVar1 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar1);
    *(undefined1 *)(lbl_832179FC + 0x24974) = 1;
    fn_82A1E810(*(undefined4 *)(lbl_832179FC + 0x8f4b8));
    RtlLeaveCriticalSection(iVar1);
    fn_82A1E650(*(undefined4 *)(lbl_832179FC + 0x8f4b0),0xffffffffffffffff);
    fn_82A1E658(*(undefined4 *)(lbl_832179FC + 0x8f4b0));
    *(undefined4 *)(lbl_832179FC + 0x8f4b0) = 0;
  }
  return;
}

