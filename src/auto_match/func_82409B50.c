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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82293FE8();
extern int fn_82672C20();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82409B50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double dStack_38;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  if (param_3 == 0) {
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar1 = *(int *)(iVar1 + 0xd4);
    iVar4 = iVar2 * 0x1c + iVar1;
    if (*(int *)(iVar4 + 0x34) != 0) {
      puVar3 = *(undefined4 **)(iVar1 + 0xc);
      uStack_40 = 0;
      uStack_3c = 0;
      fn_82273CD8(&uStack_40,3);
      dStack_38 = (double)(longlong)(iVar2 + 1);
      fn_82672C20(*puVar3,0xffffffff821ab900,&uStack_40,1);
      fn_82273C88(&uStack_40);
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
  }
  else {
    fn_82293FE8(*(undefined4 *)(iVar1 + 0xd4),*(undefined4 *)(param_2 + 0x2c));
  }
  return;
}

