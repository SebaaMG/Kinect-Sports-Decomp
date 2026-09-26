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
extern int fn_82622F28();
extern int fn_82622F78();
extern int fn_82623030();
extern int fn_82638698();
extern unsigned int lbl_82193CC0;
extern unsigned int uStack_28;
extern unsigned int uStack_78;


void fn_825EE4D8(int param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uStack_78;
  undefined4 *apuStack_70 [18];
  undefined4 uStack_28;
  
  if ((*(int *)(param_2 + 0x80) == 0) ||
     (*(int *)(param_2 + 0x80) == ((undefined4 *)param_3)[3] + 1)) {
    if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x2000) != 0) {
      fn_82638698(*(undefined4 *)*(undefined4 *)param_3,lbl_82193CC0);
    }
    fn_82622F78(param_1,param_2,param_3);
    puVar1 = &uStack_78;
    param_3 = param_3 + -8;
    lVar2 = 10;
    do {
      param_3 = param_3 + 8;
      puVar1 = puVar1 + 1;
      *puVar1 = *(undefined8 *)param_3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    uStack_28 = *(undefined4 *)(param_2 + 0x88);
    fn_82622F28(param_1,param_2,apuStack_70);
    if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x2000) != 0) {
      fn_82638698(*apuStack_70[0],0);
    }
    fn_82623030(param_1,param_2,apuStack_70);
  }
  return;
}

