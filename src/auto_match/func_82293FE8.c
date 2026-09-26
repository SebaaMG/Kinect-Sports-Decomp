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
extern int fn_82672C20();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82293FE8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double dStack_38;
  
  iVar2 = param_2 * 0x1c + param_1;
  if (*(int *)(iVar2 + 0x34) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    uStack_40 = 0;
    uStack_3c = 0;
    fn_82273CD8(&uStack_40,3);
    dStack_38 = (double)(longlong)(param_2 + 1);
    fn_82672C20(*puVar1,0xffffffff821ab8e0,&uStack_40,1);
    fn_82273C88(&uStack_40);
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  return;
}

