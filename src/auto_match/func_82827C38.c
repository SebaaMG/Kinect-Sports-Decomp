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
extern unsigned int *auStack_120;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822F8B30();
extern int fn_8240A810();
extern int fn_82536D88();
extern int fn_82828C08();
extern int fn_828292A0();
extern unsigned int iStack_100;
extern unsigned int uStack_c4;
extern unsigned int uStack_fc;


bool fn_82827C38(char *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_120 [16];
  undefined4 *****apppppuStack_110 [4];
  int iStack_100;
  uint uStack_fc;
  undefined1 auStack_f0 [32];
  int aiStack_d0 [3];
  uint uStack_c4;
  undefined1 auStack_c0 [192];
  
  fn_828292A0(aiStack_d0,1,1);
  fn_82230300(apppppuStack_110,0,0);
  *param_3 = 0xffffffff;
  *param_2 = -1;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_82230360(apppppuStack_110,param_1,pcVar4 + (-1 - (int)param_1));
  if (iStack_100 != 0) {
    if (uStack_fc < 0x10) {
      apppppuStack_110[0] = apppppuStack_110;
    }
    if (*(char *)((int)apppppuStack_110[0] + iStack_100 + -1) == ')') {
      auStack_120[0] = 0x28;
      iVar3 = fn_82536D88(apppppuStack_110,auStack_120,0xffffffffffffffff,1);
      if (iVar3 != -1) {
        *param_2 = iVar3;
        fn_82230300(auStack_f0,0,0);
        fn_82230218(auStack_f0,apppppuStack_110,iVar3 + 1,(iStack_100 - iVar3) + -2);
        fn_8240A810(auStack_c0,auStack_f0);
        fn_82230300(auStack_f0,1,0);
        fn_822F8B30(aiStack_d0,param_3);
        uVar2 = *(uint *)((int)&uStack_c4 + *(int *)(aiStack_d0[0] + 4));
        fn_82230300(apppppuStack_110,1,0);
        fn_82828C08(aiStack_d0);
        return (uVar2 & 6) == 0;
      }
    }
  }
  fn_82230300(apppppuStack_110,1,0);
  fn_82828C08(aiStack_d0);
  return false;
}

