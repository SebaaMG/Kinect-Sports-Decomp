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
extern int fn_82E914C0();
extern int fn_82E91818();
extern int fn_82E92CE8();


void fn_82E4D758(int param_1)

{
  int iVar1;
  int *apiStack_30 [12];
  
  if (*(int *)(param_1 + 0x230) != 0) {
    fn_82E914C0(*(int *)(param_1 + 0x230),apiStack_30,0);
    while (apiStack_30[0] != (int *)0x0) {
      if (*apiStack_30[0] != 0) {
        fn_8265C990(*apiStack_30[0],0x248c8000);
        *apiStack_30[0] = 0;
      }
      if (apiStack_30[0][1] != 0) {
        fn_8265C990(apiStack_30[0][1],0x248c8000);
        apiStack_30[0][1] = 0;
      }
      if (apiStack_30[0] != (int *)0x0) {
        fn_8265C990(apiStack_30[0],0x248c8000);
        apiStack_30[0] = (int *)0x0;
      }
      fn_82E914C0(*(undefined4 *)(param_1 + 0x230),apiStack_30,0);
    }
    iVar1 = *(int *)(param_1 + 0x230);
    if (iVar1 != 0) {
      fn_82E91818(iVar1);
      fn_8265C990(iVar1,0x248c8000);
      *(undefined4 *)(param_1 + 0x230) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x234);
  if (iVar1 != 0) {
    fn_82E92CE8(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  return;
}

