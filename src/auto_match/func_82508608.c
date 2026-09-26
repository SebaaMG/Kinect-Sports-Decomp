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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_825200F0();
extern int fn_827D6968();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_83283E3C;
extern unsigned int lbl_83283E40;


longlong fn_82508608(undefined8 param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  auStack_70[0] = lbl_83283E3C;
  fn_825200F0(auStack_60,auStack_70);
  if ((*(char *)(param_2 + 0xd8) == '\0') && (*(int *)(param_2 + 0x120) != -1)) {
    cVar1 = fn_827D6968(lbl_83265A24,auStack_60);
    lVar2 = 1;
    if (cVar1 != '\0') goto LAB_8250866c;
  }
  lVar2 = 0;
LAB_8250866c:
  if (lVar2 == 0) {
    auStack_70[0] = lbl_83283E40;
    fn_825200F0(auStack_40,auStack_70);
    if (((*(char *)(param_2 + 0xd8) == '\0') && (*(int *)(param_2 + 0x120) != -1)) &&
       (cVar1 = fn_827D6968(lbl_83265A24,auStack_40), cVar1 != '\0')) {
      return 1;
    }
    lVar2 = 0;
  }
  return lVar2;
}

