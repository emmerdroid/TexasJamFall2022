using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public AudioSource music;
    public bool startPlaying;
    public BeatScroller mBeatScroller;

    public static GameManager instance;

    public int currentScore;
    public int scorePerNote;
    public Text scoreText;
    public Text multiText;
    // Start is called before the first frame update
    void Start()
    {
        scorePerNote = 100;
        instance = this;
        //scoreText.text = "Score: 0";
    }

    // Update is called once per frame
    void Update()
    {
        if (!startPlaying) 
        {
            if(Input.anyKeyDown)
            {
                startPlaying = true;
                mBeatScroller.hasStarted = true;

                music.Play();
            }
        }
    }

    public void NoteHit()
    {
        Debug.Log("Hit on Time");
        //currentScore += scorePerNote;
        //scoreText.text = "Score: " + currentScore;
    }

    public void NoteMiss()
    {
        Debug.Log("Miss");
    }
}
