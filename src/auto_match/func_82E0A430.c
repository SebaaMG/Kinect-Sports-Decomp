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
extern unsigned int lbl_8323AE68;
extern unsigned int lbl_8323AE98;
extern unsigned int lbl_8323AEC8;
extern unsigned int lbl_8323AEF8;
extern unsigned int lbl_832654F0;
extern unsigned int lbl_83265550;
extern unsigned int uStack_34;


void fn_82E0A430(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uStack_34;
  undefined *apuStack_30 [12];
  
  apuStack_30[0] = &lbl_8323AE68;
  apuStack_30[1] = &lbl_8323AEF8;
  apuStack_30[2] = &lbl_8323AEC8;
  apuStack_30[3] = &lbl_8323AE98;
  if (param_2 == 1) {
    apuStack_30[0] = &lbl_832654F0;
    apuStack_30[1] = &lbl_83265550;
  }
  lVar2 = 4;
  puVar1 = &uStack_34;
  do {
    puVar1 = puVar1 + 1;
    (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,*puVar1,0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

