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
extern int fn_82A1E0D0();
extern int fn_82A2A650();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_83055F28(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  iStack_40 = param_1[0xb];
  iStack_34 = param_1[0xd];
  bVar2 = true;
  iStack_30 = param_1[0xe];
  iStack_3c = param_1[0xc];
  iStack_38 = iStack_40;
  (**(code **)(*param_1 + 0xc))();
  do {
    iVar3 = fn_82A2A650(2,&iStack_40,0,0xffffffffffffffff,1);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = fn_82A2A650(3,&iStack_38,0,param_1[1],1);
    }
    if (uVar4 < 0xc1) {
      if (uVar4 != 0xc0) {
        if (uVar4 != 0) {
          if (2 < uVar4) {
            return 1;
          }
          goto LAB_83056014;
        }
        cVar5 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar5 == '\0') {
          fn_82A1E0D0(100,1);
        }
        else {
          bVar2 = false;
        }
      }
    }
    else {
      if (uVar4 != 0x102) {
        return 1;
      }
LAB_83056014:
      RtlEnterCriticalSection(param_1 + 4);
      uVar4 = param_1[0x12];
      uVar1 = param_1[2];
      RtlLeaveCriticalSection(param_1 + 4);
      if (uVar4 < uVar1) {
        (**(code **)(*param_1 + 4))(param_1);
      }
    }
    if (!bVar2) {
      return 0;
    }
  } while( true );
}

