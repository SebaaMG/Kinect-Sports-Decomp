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
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826BD928();
extern int fn_826C59F8();
extern int fn_826C78F0();


void fn_826C8028(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar5;
  ulonglong uVar4;
  undefined8 uVar6;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    pcVar5 = (char *)fn_826957D0(param_1,0);
    uVar6 = 0;
    if (*pcVar5 != '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = fn_826957D0(param_1,0);
      uVar4 = fn_82695370(uVar6,uVar2);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = fn_826BD928(uVar4 + 0x68);
      }
    }
    fn_826C78F0(lVar3,uVar6);
  }
  return;
}

