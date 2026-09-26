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
extern unsigned int *auStack_220;
extern int fn_8268B610();
extern int fn_826BCF78();
extern int fn_826BD078();
extern int fn_826BD398();
extern unsigned int iStack_230;
extern unsigned int lbl_83155184;
extern unsigned int lbl_83155188;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_8268CAB0(undefined4 *param_1,uint *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char in_RESERVE;
  byte in_cr0;
  int iStack_230;
  int aiStack_22c [3];
  undefined1 auStack_220 [544];
  
  aiStack_22c[0] = (*param_2 & 0xfffffffc) + 8;
  *param_1 = &lbl_83155184;
  do {
    if (in_RESERVE != '\0') {
      lbl_83155188 = storeWordConditionalIndexed((ulonglong)lbl_83155188 + 1,0,0xffffffff83155188);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iStack_230 = 0;
LAB_8268cb08:
  do {
    uVar1 = fn_826BD078(aiStack_22c);
    if (uVar1 != 0) {
      uVar2 = fn_826BCF78(uVar1 & 0xffff);
      fn_826BD398(auStack_220,&iStack_230,uVar2);
      if (iStack_230 < 0x1f8) goto LAB_8268cb08;
    }
    fn_8268B610(param_1,auStack_220,iStack_230);
    iStack_230 = 0;
    if ((uVar1 & 0xffffffff) == 0) {
      return param_1;
    }
  } while( true );
}

